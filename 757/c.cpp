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

const ll mod=1e9+7;

void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,pair<ll,pair<ll,ll>>>> v;
    for (ll i = 0; i < m; i++) {
        for(auto [w,z,x,y]:v){
            cin>>x>>y>>z;
            w=abs(x-y);
        }
    }
    sort(all(v));
    reverse(all(v));
    vll a(n);
    ll ans=0;
    ll ml,mr;
    ll cnt=0;
    for(auto c:v){
        ll l=c.se.se.fi;
        ll r=c.se.se.se;
        ll z=c.se.fi;
        l--,r--;
        if(cnt!=0){
            if(l>=ml&&r<=ml){
                continue;
            }
            if(l<ml&&r<=ml){
                if(z==a[ml]){
                    continue;
                }
            }
            a[r]=z;
            continue;
        }
    }
    for(auto c:a){
        cout<<c<<" ";
    }
    cout<<endl;
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








