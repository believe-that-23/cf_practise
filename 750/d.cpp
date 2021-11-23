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
    vll b(n);
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
    }
    if(n&1){
        if(a[0]+a[1]!=0){
            ll z=a[0]+a[1];
            ll y=a[2];
            b[2]=z;
            b[1]=b[0]=-y;
        }
        else if(a[0]+a[2]!=0){
            ll z=a[0]+a[2];
            ll y=a[1];
            b[1]=z;
            b[2]=b[0]=-y;
        }
        else{
            ll z=a[1]+a[2];
            ll y=a[0];
            b[0]=z;
            b[1]=b[2]=-y;
        }
    }
    for(ll i=(n&1)?3:0;i<n;i+=2){
        ll x=__gcd(abs(a[i]),abs(a[i+1]));
        b[i]=a[i+1]/x;
        b[i+1]=-a[i]/x;
    }
    for(auto c:b)cout<<c<<" ";
    cout<<endl;
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








