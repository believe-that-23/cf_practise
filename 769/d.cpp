#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define endl "\n"
#define fi first
#define se second
#define pb push_back
#define ppb pop_back()
#define pf push_front
#define ppf pop_front()
#define eb emplace_back
#define mp make_pair
#define ll long long
#define lld long double
#define all(x) (x).begin(),(x).end()
#define vll vector<long long int>
using namespace std;
using namespace __gnu_pbds;
//#define ordered_set tree<pair<ll,ll>,null_type,less<pair<ll,ll>>,rb_tree_tag,tree_order_statistics_node_update>

//-----------------------------------------------------------
template<typename T>
T gcd(T a, T b) {
    while (a) {
        b %= a;
        swap(a, b);
    }
    return b;
}
//SparseTable<ll> s(a,[&](ll i,ll j){return __gcd(i,j);});
template <typename T, class F = function<T(const T&, const T&)>>
class SparseTable {
 public:
  ll n;
  vector<vector<T>> mat;
  F func;

  SparseTable(const vector<T>& a, const F& f) : func(f) {
    n = static_cast<ll>(a.size());
    ll max_log = 32 - __builtin_clz(n);
    mat.resize(max_log);
    mat[0] = a;
    for (ll j = 1; j < max_log; j++) {
      mat[j].resize(n - (1 << j) + 1);
      for (ll i = 0; i <= n - (1 << j); i++) {
        mat[j][i] = func(mat[j - 1][i], mat[j - 1][i + (1 << (j - 1))]);
      }
    }
  }

  T get(ll from, ll to) const {
    assert(0 <= from && from <= to && to <= n - 1);
    ll lg = 32 - __builtin_clz(to - from + 1) - 1;
    return func(mat[lg][from], mat[lg][to - (1 << lg) + 1]);
  }
};
void solve()
{
    ll n;
    cin>>n;
    vll a(n);
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
    }
    SparseTable<ll> s(a,[&](ll i,ll j){return __gcd(i,j);});
    ll ans=0;
    ll l=0;
    for(ll i=0;i<n;i++){
        ll r=i;
        bool flag=false;
        while(l<=r){
            ll mid=l+(r-l)/2;
            ll len=i-mid+1;
            ll gg=s.get(mid,i);
            if(len>gg){
                l=mid+1; 
            }
            else if(len<gg){
                r=mid-1;
            }
            else{
                flag=true;
                break;
            }
        }
        if(flag){
            l=i+1;ans++;
        }
        cout<<ans<<" ";
    }
    cout<<endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t=1;
    for(int i=1;i<=t;i++){
//        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}








