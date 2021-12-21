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
    vector<pair<ll,pair<ll,ll>>> v;
    for (ll i = 0; i < n; i++) {
        ll x,y;
        cin>>x>>y;
        v.pb(mp(x,mp(i,y)));
    }
    sort(all(v));
    vll ans(n);
    ans[n-1]=0;
    auto d=v.back();
    ll mx=d.se.se;
    ll cnt=0;
    bool flag=false;
    for(auto c:v){
        if(c.se.se>=mx&&!flag){
            ans[c.se.fi]=1; 
            flag=true;
        }
        if(flag)ans[c.se.fi]=1;
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








