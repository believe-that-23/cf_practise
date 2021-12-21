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
#define ordered_set tree<pair<ll,ll>,null_type,less<pair<ll,ll>>,rb_tree_tag,tree_order_statistics_node_update>

//-----------------------------------------------------------


void solve()
{
    ll w,h;
    cin>>w>>h;
    ll ans=0;
    for(ll i=0;i<2;i++){
        ll k;
        cin>>k;
        vll x(k);
        for (ll i = 0; i < k; i++) {
            cin>>x[i];
        }
        ans=max(ans,abs(x[0]-x[k-1])*h);
    }
    for(ll i=0;i<2;i++){
        ll z;
        cin>>z;
        vll y(z);
        for (ll i = 0; i < z; i++) {
            cin>>y[i];
        }
        ans=max(ans,abs(y[0]-y[z-1])*w);
    }
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








