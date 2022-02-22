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


void solve()
{
    ll hc,dc;
    ll hm,dm;
    cin>>hc>>dc;
    cin>>hm>>dm;
    ll k,w,a;
    cin>>k>>w>>a;
    ll hits_c=(hm+dc-1)/dc;
    ll hits_m=(hc+dm-1)/dm;
    if(hits_c<=hits_m){
        cout<<"YES"<<endl;
        return;
    }
    for(ll i=0;i<=k;i++){
        ll new_hc=hc+i*a;
        ll z=k-i;
        ll new_dc=dc+z*w;
        ll x=(hm+new_dc-1)/new_dc;
        ll y=(new_hc+dm-1)/dm;
        if(x<=y){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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








