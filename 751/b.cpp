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
    vll a(n);
    vll cnt(n+1);
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
        cnt[a[i]]++;
    }
//    for(auto c:cnt)cout<<c<<" ";
    vector<vll> ans(2005,vll(n));
    for (ll i = 0; i < n; i++) {
        ans[0][i]=a[i];
    }
    ll ct=1;
    ll cc=0;
    while(true){
        vll c=a; 
        for(ll i=0;i<n;i++){
            a[i]=cnt[a[i]];
        }
        for (ll i = 0; i < n+1; i++) {
            cnt[i]=0;
        }
        for (ll i = 0; i < n; i++) {
            cnt[a[i]]++;
        }
        for (ll i = 0; i < n; i++) {
            ans[ct][i]=a[i];
        }
        if(c==a)break;
        ct++;
    }
    ll q;
    cin>>q;
    while(q--){
        ll x,k;
        cin>>x>>k;
        x--;
        if(k<=ct){
            cout<<ans[k][x]<<endl;
        }
        else{
            cout<<ans[ct][x]<<endl;
        }
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








