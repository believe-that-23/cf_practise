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
    ll a,b;
    cin>>a>>b;
    ll x=max(a,b);
    ll y=min(a,b);
    if(a==b){
        cout<<a/2<<endl;
        return;
    }
    if(3*y<=x){
        cout<<y<<endl;
        return;
    }
    ll ans=0;
    ll z=(x-y)/2;
    ans=z;
    x-=z*3;
    y-=z;
    if(x&&y){
        if(x+y>3){
            ans+=min(x,y)/2;
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








