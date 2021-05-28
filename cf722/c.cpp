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
   vector<vll> adj(n);
   vector<vll> a(n,vll(2));
   for(ll i=0;i<n;i++){
       for(ll j=0;j<2;j++){
           cin>>a[i][j];
       }
   }
   for(ll i=0;i<n-1;i++){
       ll u,v;
       cin>>u>>v;
       u--,v--;
       adj[u].pb(v);
       adj[v].pb(u);
   }
   vector<vll> dp(n,vll(2,-1));
   function<void(ll,ll)> dfs=[&](ll u,ll p){
       dp[u][0]=0;
       dp[u][1]=0;
       for(auto v:adj[u]){
           if(v==p)continue;
           dfs(v,u);
           for(ll i=0;i<2;i++){
               dp[u][i]+=max(dp[v][0]+abs(a[u][i]-a[v][0]),dp[v][1]+abs(a[u][i]-a[v][1]));
           }
       }
   }; 
   
   dfs(0,-1);
   cout<<max(dp[0][0],dp[0][1])<<endl;
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