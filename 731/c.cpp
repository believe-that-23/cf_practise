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
    ll k,n,m;
    cin>>k>>n>>m;
    vll a(n),b(m);
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
    }
    for (ll i = 0; i < m; i++) {
        cin>>b[i];

    }
    vll ans;
    bool flag=true;
    ll i=0,j=0;
    while(true){
        bool done=false;
       if(a[i]==0&&i<n){ans.pb(a[i]);i++,k++;done=true;}
       if(b[j]==0&&j<m){ans.pb(b[j]);j++,k++;done=true;}
       if(a[i]!=0&&i<n){
           if(k>=a[i]){ans.pb(a[i]);i++;done=true;
           }
       }
       if(b[j]!=0&&j<m){
           if(k>=b[j]){ans.pb(b[j]);j++;done=true;
           }
       }
      if(i==n&&j==m)break;

      if(!done){
          cout<<-1<<endl;
          return;
      }
       
       
    }
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








