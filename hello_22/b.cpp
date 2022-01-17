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
    vll a(n),b(n),c(n);
    for (ll i = 0; i < n; i++) {
        cin>>a[i]>>b[i]>>c[i];
    }
    vll ans(n);
    pair<ll,ll> l;
    pair<ll,ll> r;
    ll z=INT64_MAX;
    for (ll i = 0; i < n; i++) {
        if(i==0){
            l=mp(a[i],c[i]);
            r=mp(b[i],c[i]);
            ans[i]=c[i];
            continue;
        }
        l=min(l,mp(a[i],c[i]));
        if(r.fi==b[i]){
            r=mp(b[i],min(c[i],r.se));
        }
        if(r.fi<b[i]){
            r=mp(b[i],c[i]);
        }
        if(l.fi==a[i]&&r.fi==b[i]){
            ans[i]=min(l.se+r.se,c[i]);
            z=min(z,ans[i]);
        }
        else ans[i]=min(l.se+r.se,z);
    }
    for(auto c:ans)cout<<c<<endl;
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








