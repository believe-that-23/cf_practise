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
    ll n,l,r,k;
    cin>>n>>l>>r>>k;
    vll a(n);
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
    }
    sort(all(a));
    ll ans=0;
    for (ll i = 0; i < n; i++) {
        if(k-a[i]>=0&&a[i]>=l&&a[i]<=r){
            ans++;
            k-=a[i];
        }
    }
    cout<<ans<<endl;
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








