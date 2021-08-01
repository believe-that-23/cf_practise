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
    ll W,H;
    cin>>W>>H;
    ll xa,ya,xb,yb;
    cin>>xa>>ya>>xb>>yb;
    ll w,h;
    cin>>w>>h;
    ll ans=1e10;
    if(w+(xb-xa)<=W){
        ans=min(ans,max(0LL,w-xa));
        ans=min(ans,max(0LL,xb-(W-w)));
    }
    if (h+(yb-ya)<=H) {
        ans=min(ans,max(0LL,h-ya));
        ans=min(ans,max(0LL,yb-(H-h)));
    }
    if(ans==1e10)ans=-1;
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








