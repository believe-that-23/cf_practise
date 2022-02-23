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


void solve()
{
    ll x,y;
    pair<ll,ll> p[3];
    ll n=3;
    for (ll i = 0; i < n; i++) {
        cin>>p[i].fi>>p[i].se;
    }
    double ans=0;
    if(p[0].se==p[1].se&&p[2].se<p[0].se)ans=abs(p[0].fi-p[1].fi);
    if(p[1].se==p[2].se&&p[0].se<p[1].se)ans=abs(p[1].fi-p[2].fi);
    if(p[0].se==p[2].se&&p[1].se<p[2].se)ans=abs(p[0].fi-p[2].fi);

    cout<<ans<<endl;

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    cout<<fixed<<setprecision(10);
    for(int i=1;i<=t;i++){
//        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}








