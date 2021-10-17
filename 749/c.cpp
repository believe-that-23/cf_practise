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
    vector<vll> grid(n,vll(m));
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            char c;
            cin>>c;
            if(c=='X')grid[i][j]=1;
        }
    }
    vll pref(m+1);
    for (ll i = 1; i < n; i++) {
        for (ll j = 0; j < m-1; j++) {
            if(grid[i][j]==1&&grid[i-1][j+1]==1)pref[j+1]=1;
        }
    }
    for(ll i=1;i<m;i++){
        pref[i]+=pref[i-1];
    }
    ll q;
    cin>>q;
    while(q--){
        ll x,y;
        cin>>x>>y;
        x--,y--;
        if(pref[x]==pref[y])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t=1;
//    cin>>t;
    for(ll i=1;i<=t;i++){
//        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}








