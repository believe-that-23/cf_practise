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

//rlog(n)
//prevents overflow
ll ncr(int n, int r)
{
    long long p = 1, k = 1;
    if (n - r < r)
        r = n - r;
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            long long m = __gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
    }
    else
        p = 1;
    return p;
}
ll binpow(ll a, ll b) {
    ll ans = 1;
    while (b) {
        if (b & 1) {
            ans = 1LL * ans * a ;
        }
        a = 1LL * a * a ;
        b >>= 1;
    }
    return ans;
}

void solve()
{
    ll n;
    cin>>n;
    vll a(n);
    set<ll> s;
    ll c0=0,c1=0;
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
        s.insert(a[i]);
        if(a[i]==1)c1++;
        if(a[i]==0)c0++;
    }
//    if(s.size()==1){
//        ll z=*s.begin();
//        if(z==0){s.erase(s.begin());}
//        if(*s.begin()==1){
//            cout<<ans
        
    ll a0=binpow(2LL,c0);
    ll ans=c1*a0;
    cout<<ans<<endl;
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








