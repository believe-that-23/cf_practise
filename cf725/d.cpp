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
#define  FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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

int getPrimes(int a) {
    int ans = 0;
    for (int i = 2; i * i <= a; i++) {
        while (a % i == 0) {
            a /= i;
            ans++;
        }
    }
    if (a > 1) {
        ans++;
    }
    return ans;
}
 
void solve() {
    int a, b, k;
    cin >> a >> b >> k;
    if (k == 1) {
        if (a == b) {
            cout << "NO\n";
        } else if (a % b == 0 || b % a == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        return;
    }
    if (k > getPrimes(a) + getPrimes(b)) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    return;
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