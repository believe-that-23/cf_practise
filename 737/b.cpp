#include <bits/stdc++.h>
#include <cmath>
#include <regex>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ll long long
#define all(x) (x).begin(),(x).end()
#define vll vector<long long int>
#define FAST ios_base :: sync_with_stdio (false); cin.tie (NULL)
using namespace std;
#define endl "\n"
ll C(ll n, ll k) {
    double res = 1;
    for (int i = 1; i <= k; ++i)
       res = res * (n - k + i) / i;
    return (ll)(res + 0.01);
}
vector<vll> readGraph(ll n,ll m){
    vector<vll> g(n);
    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        //sc.read(a,b);
        //a--;b--;
        g[a].pb(b);
        g[b].pb(a);
    }
    return g;
}
vector<vll> readTree(int n){
    return readGraph(n,n-1);
}
//----------------------------------------------------------------------------
void solve()
{
    ll k,n;
    cin>>n>>k;
    vll a(n);
    vll b(n);
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
        b[i]=a[i];
    }
    if(k==n){
        cout<<"YES"<<endl;
        return;
    }
    
    sort(all(b));
    ll cnt=0;
    for (ll i = 0; i < n; i++) {
        ll ind=lower_bound(all(b),a[i])-b.begin(); 
        while(i+1<n&&ind+1<n&&a[i+1]==b[ind+1]){
            ind++;
            i++; 
        }
        cnt++;
    }
    if(cnt<=k)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}
int main() {
FAST;
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}








