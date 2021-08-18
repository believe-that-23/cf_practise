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
vll parent(1e6+5);
vll size(1e6+5);
ll find_set(ll v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}
void make_set(ll v) {
    parent[v] = v;
    size[v] = 1;
}

void union_sets(ll a, ll b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}

void solve()
{
    ll n,m;
    cin>>n>>m;
    map<ll,ll> mm; 
    while(m--){
        ll u,v;
        cin>>u>>v;
        if(u<v)swap(u,v);
        mm[v]++;
    }
    ll q;
    cin>>q;
    map<ll,ll> tmp;
    tmp=mm;

    while(q--){
        ll t;
        cin>>t;
        if(t==1){
            ll a,b;
            cin>>a>>b;
            if(a<b)swap(a,b);
            tmp[b]++;
        }
        else if(t==2){
            ll a,b;
            cin>>a>>b;
            if(a<b)swap(a,b);
            tmp[b]--; if(tmp[b]==0)tmp.erase(b);
        }
        else{
            cout<<n-tmp.size()<<endl;
        }
    }


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








