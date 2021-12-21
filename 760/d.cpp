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
    vll a(n);
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
    }
    sort(all(a));
    vll b;
    ll cnt=0;
    for(ll i=n-1;i>=0&&cnt<k;i--){
        b.pb(a[i]);
        cnt++;
    }
    cnt=0;
    while(cnt<k){
        a.pop_back();
        cnt++;
    }
    sort(all(b));
    ll ans=0;
    while(k--){
        ll x=a.back();
        ll y=b.back();
        ans+=x/y;
        a.pop_back();
        b.pop_back();
    }
    while(!a.empty()){
        ans+=a.back();
        a.pop_back();
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








