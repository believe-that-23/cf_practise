#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define endl "\n"
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ll long long
#define lld long double
#define all(x) (x).begin(),(x).end()
#define vll vector<long long int>
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<pair<ll,ll>,null_type,less<pair<ll,ll>>,rb_tree_tag,tree_order_statistics_node_update>

//-----------------------------------------------------------

const ll mod=998244353;

ll binpow(ll a, ll b) {
    ll ans = 1;
    while (b) {
        if (b & 1) {
            ans = 1LL * ans * a % mod;
        }
        a = 1LL * a * a % mod;
        b >>= 1;
    }
    return ans;
}

void solve()
{
    ll n;
    cin>>n;
    vll a(n);
    vll cnt(n+1);
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
        cnt[a[i]]++;
    }
    vll dp(n);
    dp[0]=(a[0]==0||a[0]==1)?1:0;
    for (ll i = 0; i < n; i++) {
        
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t=1;
    cin>>t;
    for(ll i=1;i<=t;i++){
//        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}








