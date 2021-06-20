#include <bits/stdc++.h>
#include <cmath>
#include <regex>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ll long long
#define all(x) (x).begin(),(x).end()
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
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
   ll n,k,x;
   cin>>n>>k>>x;
   vll a(n);
   for(auto &c:a)cin>>c;
   sort(all(a));
   ll cnt=0;
   vector<ll> v;
   for(ll i=1;i<n;i++){
       ll diff=a[i]-a[i-1];
       if(diff>x){
           v.pb((diff-1)/x);
       }
   } 
   sort(all(v));
   ll ans=v.size()+1;
   for(auto c:v){
       k-=c;
       if(k<0)break;
       ans--; 
   }
   cout<<ans<<endl;
}
int main() {
FAST;
ll t;
t=1;
while(t--){
   solve();
}
return 0;
}