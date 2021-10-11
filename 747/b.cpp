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

ll largest(ll n){
    ll z=1;
    ll cnt=0;
    while(z<=n){
        z*=2;
        cnt++;
    }
    return cnt-1;
}
ll powe(ll n,ll k){
    ll x=1;
    while(k--){
        x*=n;
    }
    return x;
}
const ll MOD=1e9+7;
ll binpow(ll a, ll b) {
    ll ans = 1;
    while (b) {
        if (b & 1) {
            ans = 1LL * ans * a % MOD;
        }
        a = 1LL * a * a % MOD;
        b >>= 1;
    }
    return ans;
}

void solve()
{
    ll n,k;
    cin>>n>>k;
    ll ans=0;
    ll s=n;

    while(k){
        ll z=largest(k);
        ans=(ans+binpow(n,z))%MOD;
        k-=powe(2,z);
    }
    cout<<ans<<endl;


}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}








