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
    ll k,x;
    cin>>k>>x;
    auto f=[&](ll n)->ll{
        ll z=0;
        if(n<=k){
            z+=(n*(n+1))/2;
        }
        else{
            ll kk=2*k-1-n;
            z+=(k*(k+1))/2;
            ll u=(k*(k-1))/2;
            ll v=(kk*(kk+1))/2;
            z+=u-v;
        }
        return z;
    };
    ll l=0;
    ll r=2*k-1;
    ll ans=-1;
    while(l<r){
        ll mid=l+(r-l)/2;
        if(f(mid)>=x){
            r=mid;
        }else{
            l=mid+1;
        }
    }
//    if(f(l)<x){
//        l++;
//<F9>    }
    cout<<l<<endl;
     
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








