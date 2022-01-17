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
    ll n;
    cin>>n;
    vll k(n);
    vector<pair<ll,ll>> v;
    for (ll i = 0; i < n; i++) {
        cin>>k[i];
    }
    for (ll i = 0; i < n; i++) {
        ll x;
        cin>>x;
        v.eb(k[i],x);
    }

    vector<pair<ll,ll>> c;
    for(ll i=0;i<n;i++){
        ll l,r;
        l=v[i].fi-v[i].se+1;
        r=v[i].fi;
        ll temp=0;
        while(!c.empty()&&l<=c.back().se){
            if(l>=c.back().fi)
                temp+=l-c.back().fi;
            c.ppb;
        }
        l-=temp;
        c.eb(l,r);
//        cout<<c.back().fi<<" "<<c.back().se<<endl;
    }

    auto f=[&](ll x)->ll{
        return x*(x+1)/2;
    };

    ll ans=0;
    for(auto d:c){
        ans+=f(d.se-d.fi+1);
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








