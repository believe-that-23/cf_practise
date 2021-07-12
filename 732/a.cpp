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
    ll m=0;
    vll a(n);
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
    }
    vll b(n);
    for (ll i = 0; i < n; i++) {
        cin>>b[i];
    }
    ll sum=0;
    for (ll i = 0; i < n; i++) {
        sum+=b[i]-a[i];
        m+=abs(a[i]-b[i]);
    }
    if (sum!=0) {
        cout<<-1<<endl;
        return;
    }
    vector<pair<ll,ll>> inc;
    vector<pair<ll,ll>> decr;
    for (ll i = 0; i < n; i++) {
        if(a[i]<b[i])inc.pb({b[i]-a[i],i+1});
        if(a[i]>b[i])decr.pb({a[i]-b[i],i+1});
    }

    if(m==0){
        cout<<0<<endl;
        return;
    }
    ll i=0;
    ll j=0;
    cout<<m/2<<endl;
    auto &d=decr[j];
    while(m){ 
      auto &c=inc[i];
      auto &d=decr[j];
      while(c.fi&&d.fi){
          m--;
          cout<<d.se<<" "<<c.se<<endl;
          c.fi--;
          d.fi--;
      }
      if (c.fi==0) {
          i++;          
      }
      if (d.fi==0) {
          j++;
      }
      if(i==inc.size()||j==decr.size())break;
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








