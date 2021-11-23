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
    ll ans=-1;
    ll notes=0;
    for(ll i=10;i<=1e18;i*=10){
        ll val=i-1;
        for(ll j=n-1;j>=0;j--){
            if(pow(10,a[j])<=val){
                ll z=val/(pow(10,a[j]));
                val-=z*pow(10,a[j]);
                notes+=z;
            }
        }
        if(notes>k||val){
            ans=i-1;
            break;
        }
    }
    vll b;
    ll x=ans;
    ll z=0;
    while(x){
        x/=10;
        z++;
    }
    z--;        
    b.pb(ans);
    for (ll i = 1; i < 9; i++) {
        b.pb(ans-pow(10,z)*i);
    }
    for(auto c:b)cout<<c<<" ";
    cout<<endl;
    sort(all(b));
    for(ll c:b){
        ll val=c;
        notes=0;
        for(ll j=n-1;j>=0;j--){
            if(pow(10,a[j])<=val){
                ll z=val/(pow(10,a[j]));
                val-=z*pow(10,a[j]);
                notes+=z;
            }
        }
        if(notes>k){
            cout<<c-(notes-k-1)<<endl;
            return;
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








