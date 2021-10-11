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

void solve()
{
    ll n;
    cin>>n;
    vll a(n);
    ll sum=0;
    map<ll,ll> m;
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
        sum+=a[i];
        m[a[i]]++;
    }
    ll nsum=0;
    ll l=0,r=n-1;
    ll ans=0;
    sort(all(a));
    set<pair<ll,ll>> s;
    while(l<r){
        nsum=sum-a[l]-a[r];
        if(nsum*n==sum*(n-2)){
            if(s.count(mp(min(a[l],a[r]),max(a[l],a[r])))){
                l++;
                continue;
            }
            if(a[l]==a[r]){
                ans+=ncr(m[a[l]],2);
            }
            else{
                ans+=m[a[l]]*m[a[r]];
            }
            s.insert(mp(min(a[l],a[r]),max(a[l],a[r])));

        }
        if(nsum*n>sum*(n-2)){
            l++;
        }
        else r--;
    }
//    sort(all(v));
//    v.erase(unique(all(v)),v.end());
//    for(ll c:v){
//        ans+=ncr(m[c],2);
//    }
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








