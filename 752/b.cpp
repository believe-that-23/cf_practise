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
    set<ll> s;
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
        s.insert(a[i]);
    }

    ll cc=0;
    if(n%2==0){
        cout<<"YES"<<endl;
        return;
    }
    for (ll i = 0; i < n-1; i++) {
        if(a[i]>=a[i+1]){
            cc=1;
            break;
        }
    }
    if(cc)cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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








