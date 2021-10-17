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
    ll n,m;
    cin>>n>>m;
    ll ans;
    vector<bool> vis(n+1);
    for (ll i = 0; i < m; i++) {
        ll a,b,c;
        cin>>a>>b>>c;
//        vis[a]=1;
//        vis[c]=1;
        vis[b]=1;
    }
    for (ll i = 1; i <= n; i++) {
        if(!vis[i]){
            ans=i;
            break;
        }
    }
    for (ll i=1; i<=n; i++){
        if(i==ans)continue;
        cout<<ans<<" "<<i<<endl;
    }

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








