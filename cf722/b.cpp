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
   vll a(n);
   ll cnt=0;
   ll cnt2=0;
   ll cnt3=0;
   map<ll,ll> m;
   vll v;
   ll small=INT_MAX;
   for(ll i=0;i<n;i++){
       cin>>a[i];
       if(a[i]==0)cnt2++;
       if(a[i]<0){
           cnt++;
           m[a[i]]++;
           v.pb(-a[i]);
       }
       if(a[i]>0){
           small=min(small,a[i]);
           cnt3++;
       }
   }
   sort(all(a));
   sort(all(v));
   ll diff=INT_MAX;
   for(ll i=1;i<v.size();i++){
       diff=min(diff,a[i]-a[i-1]);
   }
   bool flag=diff>=small; 
   ll ans=cnt+cnt2;
   if(cnt2<=1&&cnt3&&flag)ans++;
   if(ans==0)ans++;
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