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
    ll n;
    cin>>n;
    vll p(n);
    for (ll i = 0; i < n; i++) {
        cin>>p[i];
    }
    vector<pair<ll,pair<ll,ll>>> v;
    for(ll i=0;i<n;i++){
        char c;
        cin>>c;
        if(c=='1')
            v.pb(mp(1,mp(p[i],i)));
        else
            v.pb(mp(0,mp(p[i],i)));
    }
    sort(all(v));
    reverse(all(v));
    vll ans(n);
    ll k=n;
    for(auto c:v){
        ll pos=c.se.se;
        ans[pos]=k--;
    }
    for(auto c:ans)cout<<c<<" ";
    cout<<endl;
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








