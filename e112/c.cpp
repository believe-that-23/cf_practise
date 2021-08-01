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
    ll n;
    cin>>n;
    vector<vll> v(2,vll(n));
    vll sum(2);
    vll p(n),q(n);
    for (ll i = 0; i < n; i++) {
        cin>>v[0][i];
        sum[0]+=v[0][i];
        if(i>0){
            q[i]=q[i-1]+v[0][i];
        }
        else{
            q[i]=v[0][i];
        }
    }
    for (ll i = 0; i < n; i++) {
        cin>>v[1][i];
        sum[1]+=v[1][i];
        if(i>0)p[i]=p[i-1]+v[1][i];
        else p[i]=v[1][i];
    }
    ll alice=0;
    ll bob=0;
    
    ll ans=0;
    for(ll i=0;i<n;i++){
       ans=max(ans,min(sum[0]-q[i],p[i]));
    }
    if(ans==INT_MAX)ans=0;
    cout<<ans<<endl;

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








