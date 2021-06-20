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
   ll n;
   cin>>n;
   vector<pair<ll,ll>> v;
   for(ll i=0;i<n;i++){
      ll a,b;
      cin>>a>>b;
      v.pb({b,a});
   }
   sort(all(v));
   ll l=0,r=n-1;
   ll ans=0;
   ll cnt=0;
   while(l<=r){
      if(v[l].fi<=cnt){
         cnt+=v[l].se;
         ans+=v[l].se;
         l++;
      }
      else{
         ll z=min(v[l].fi-cnt,v[r].se);
         cnt+=z;
         ans+=z*2;
         v[r].se-=z;
         if(v[r].se==0)r--;
      }
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