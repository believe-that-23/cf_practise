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
const ll MX=100001;
template<int SZ> struct DSU {
    int parent[SZ], size[SZ];
 
    DSU() {
        for(ll i=0;i<SZ;i++) parent[i] = i, size[i] = 0;
    }
 
    int get(int x) {
        if (parent[x] != x) parent[x] = get(parent[x]);
        return parent[x];
    }
 
    void unify(int x, int y) {
        x = get(x); y = get(y);
        if (x == y) return;
        if (size[x] < size[y]) swap(x, y);
        if (size[x] == size[y]) size[x]++;
        parent[y] = x;
 
    }
};
 
void solve() {
    int N, X, Y; cin >> N >> X >> Y;
    DSU<MX> A, B;
    for(ll i=0;i<X;i++) {
        int U, V; cin >> U >> V; U--; V--;
        A.unify(U, V);
    }
    for(ll i=0;i<Y;i++) {
        int U, V; cin >> U >> V; U--; V--;
        B.unify(U, V);
    }
 
    vector<pair<int,int>> ans;
    for(ll i=0;i<N;i++) {
        for(ll j=i;j<N;j++) {
            if (A.get(i) != A.get(j) && B.get(i) != B.get(j)) {
                A.unify(i, j); B.unify(i, j); ans.pb({i+1, j+1});
            }
        }
    }
    cout << ans.size() <<endl;
    for(auto c:ans)cout<<c.fi<<" "<<c.se<<endl;
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








