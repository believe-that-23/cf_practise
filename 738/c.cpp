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
vll adj[10005];
void solve()
{
    ll n;
    cin>>n;
    vll a(n);
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
    }
    vll ans;
    if(a[0]==1){
        cout<<n+1<<" ";
        for (ll i = 0; i < n; i++) {
            cout<<i+1<<" ";
        }
        cout<<endl;
        return;
    }
    if(a[n-1]==0){
        for (ll i = 0; i < n; i++) {
            cout<<i+1<<" ";
        }
        cout<<n+1<<endl;
        return;
    }
        
        
    bool flag=false;

    for (ll i = 0; i < n-1; i++) {
        ans.pb(i+1);
        if(!flag&&a[i]==0&&a[(i+1)%n]==1){
            ans.pb(n+1);
            ans.pb(i+2);
            i++;
            flag=true;
        }
    }
    ans.erase(unique(all(ans)),ans.end());
    if(ans.back()==1)ans.pop_back();
    if(!flag)cout<<-1<<endl;
    else{
        for(auto c:ans)cout<<c<<" ";
        cout<<endl;
    }
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








