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
    ll xa,ya;
    cin>>xa>>ya;
    ll xb,yb;
    cin>>xb>>yb;
    ll xf,yf;
    cin>>xf>>yf;
    ll ans=0;
    ans=abs(ya-yb)+abs(xa-xb);
    if (ans==0) {
        cout<<0<<endl;
        return;
    }
    if (xa==xb&&xb==xf) {
        if ((ya<yf&&yf<yb)||(yb<yf&&yf<ya)) {
            cout<<ans+2<<endl;
            return;
        }
        cout<<ans<<endl;
        return;
    }
    if (ya==yb&&yb==yf) {
          if ((xa<xf&&xf<xb)||(xb<xf&&xf<xa)) {
                    cout<<ans+2<<endl;
                return; 
            }
            cout<<ans<<endl;
            return; 
        }

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








