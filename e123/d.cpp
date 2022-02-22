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
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

//-----------------------------------------------------------

const ll MOD=998244353;
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
    ll n,m;
    cin>>n>>m;
    ll k,q;
    cin>>k>>q;
    set<ll> s,t;
    ll cnt=0;
    vector<pair<ll,ll>> p;
    for(ll i=0;i<q;i++){
        ll u,v;
        cin>>u>>v;
        p.eb(u,v);
    }

    for(ll i=q-1;i>=0;i--){
        auto c=p[i].fi;
        auto d=p[i].se;
        bool l=false,r=false;
        if(t.size()==m||s.count(c))l=true;
        if(s.size()==n||t.count(d))r=true;
        if(l&&r)continue;
        s.insert(c);
        t.insert(d);
        cnt++;

    }
    ll ans=binpow(k,cnt);
    cout<<ans<<endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
//        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}








