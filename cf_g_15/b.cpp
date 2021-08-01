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
    vector<vll> v(n,vll(5));
    set<ll> s;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < 5; j++) {
            cin>>v[i][j];
        }

    }
    
    ll win,winner;
    win=0;
    for (ll i = 1; i < n; i++) {
        ll cnt=0;
        for (ll j = 0; j < 5; j++) {
            if(v[i][j]<v[win][j])cnt++; 
        }
        if(cnt>=3)win=i;
    }
    s.insert(win);
    for(auto c:s){
        win=0;
        for (ll i = 0; i < n; i++) {
            ll cnt=0;
            if(i==c)continue;
            for (ll j = 0; j < 5; j++) {
                if(v[c][j]<v[i][j]){
                    cnt++;
                }
            }
            if(cnt>=3)win++;
        }
        if(win==n-1){
            cout<<c+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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








