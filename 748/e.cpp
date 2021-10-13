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
    ll n,k;
    cin>>n>>k;
    vll adj[n];
    vll ind(n);
    for(ll i=0;i<n-1;i++){
        ll u,v;
        cin>>u>>v;
        u--,v--;
        adj[u].pb(v);
        adj[v].pb(u);
        ind[u]++;
        ind[v]++;
    }
    vll q;
    for (ll i = 0; i < n; i++) {
        if(ind[i]==1){
            q.pb(i);
        }
    }
    ll cnt=0;
    ll c=0;
    for (ll i = 0; i < k; i++) {
        vll z;
        cnt+=q.size();
        if(q.empty())break;
        c++;
        for(auto u:q){
            ind[u]--;
            for(auto v:adj[u]){
                ind[v]--;
                if(ind[v]==1)z.pb(v);
            }
        }
        q=z;
    }
    if(c<k&&n-cnt==1){
        cout<<0<<endl;
        return;
    }
    cout<<n-cnt<<endl;

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








