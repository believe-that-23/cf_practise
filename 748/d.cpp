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


void solve()
{
    ll n;
    cin>>n;
    vll a(n);
    set<ll> s;
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
        s.insert(a[i]);
    }
    if(s.size()==1){
        cout<<-1<<endl;
        return;
    }
    sort(all(a));
    a.erase(unique(all(a)),a.end());

    ll ans=0;
    vll diff;
//    diff.pb(a[0]);
    for(ll i=0;i<a.size();i++){
        if(i>0){
            diff.pb(a[i]-a[i-1]);
        }
    }
    if(diff.size()==1){
        cout<<diff.front()<<endl;
        return;
    }
    ans=diff[0];
    for(ll i=0;i<diff.size();i++){
        if(i>0){
            ans=__gcd(ans,diff[i]);
        }
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








