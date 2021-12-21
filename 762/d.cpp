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
    ll m,n;
    cin>>m>>n;
    vector<vll> p(m,vll(n));
    vll a(m);
    for (ll i = 0; i < m; i++) {
        for (ll j = 0; j < n; j++) {
            cin>>p[i][j];
        } 
    }
    ll mi=INT64_MAX;
    set<ll> s;
    for(ll i=0;i<n;i++){
        ll mx=0;
        ll val=0;
        for(ll j=0;j<m;j++){
            if(p[j][i]>val){
                val=p[j][i];
                mx=j;
            }
        }
        s.insert(mx);
        mi=min(mi,val);
    }
    if(s.size()<=n-1){
        cout<<mi<<endl;
        return;
    }
    ll z=0;
    for(ll i=0;i<m;i++){
        sort(all(p[i]));
        reverse(all(p[i]));
        ll y=p[i][1];
        z=max(z,y);
    }
    cout<<min(mi,z)<<endl;
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









