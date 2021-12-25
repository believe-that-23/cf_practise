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

vector<vll> cnt(200006,vll(22));

void solve()
{
    ll l,r;
    cin>>l>>r;
    ll n=r-l+1;
    ll ans=INT_MAX;
    for(ll i=0;i<=21;i++){
        ans=min(ans,n-(cnt[r][i]-cnt[l-1][i]));
    }
    cout<<ans<<endl;
}
int main() {
    for(ll i=1;i<=200005;i++){
        for(ll k=0;k<=21;k++){
            cnt[i][k]+=cnt[i-1][k];
        }
        for(ll j=21;j>=0;j--){
            if(i&(1LL<<j)){
                cnt[i][j]++;
            }
        }
    }
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








