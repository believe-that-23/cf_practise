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
   vll a(n);
   map<ll,ll> m;
   for(ll i=0;i<n;i++){
       cin>>a[i];
       m[a[i]]++;
   }
   sort(all(a));
   ll f=-1,l=-1;
    ll diff=a[1]-a[0];
    f=a[0],l=a[1];
    for(ll i=2;i<n;i++){
        ll n_diff=a[i]-a[i-1];
        if(n_diff<diff){
            f=a[i-1],l=a[i];
            diff=n_diff;
        }
    }
    m[f]--,m[l]--;
   vll ans;
   ans.pb(f);
   for(auto &c:m){
       if(ans.back()<=c.fi){
           while(c.se){
               ans.pb(c.fi);
               c.se--;
           }
       }
   }
//    for(auto c: m)cout<<c.fi<<" "<<c.se<<endl;
   for(auto &c:m){
       while(c.se){
           ans.pb(c.fi);
           c.se--;
       }
   }
   ans.pb(l);
   for(auto c:ans)cout<<c<<" ";
   cout<<endl;

   
   
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