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
    ll n,k;
    cin>>n>>k;
    vll a(n);
    map<ll,ll> m;
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
        m[a[i]]++;
    }
    ll cnt=0,c1=0;
    set<ll> s;
    for(auto &c:m){
        if(c.se>=k)cnt++,c.se=k,s.insert(c.fi);
        else c1+=c.se;
    }
    ll x=c1%k;
    c1-=x;
    ll z=1;
    for (ll i = 0; i < n; i++) {
        if(s.count(a[i])){
                if(m[a[i]]==0){
                    cout<<0<<" ";
                    continue;
                }
                cout<<k-m[a[i]]+1<<" ";
                m[a[i]]--;
        }
        else{
            if(c1==0){
                cout<<0<<" ";
                continue;
            }
            cout<<z++<<" ";
            m[a[i]]--;
            c1--;
            if(z>k)z=1;
        }
    }
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








