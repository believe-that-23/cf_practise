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
    vll a(3);
    map<ll,ll> m;
    for (ll i = 0; i < 3; i++) {
        cin>>a[i];
        m[a[i]]++;
    }
    ll winner=*max_element(all(a));
    vll ans(3);
    for (ll i = 0; i < 3; i++) {
        if(a[i]==winner){
            if(m[a[i]]>1){
                ans[i]=1;
            }
            else{
                ans[i]=0;
            }
        }else{
            ans[i]=winner+1-a[i];
        }
    }
    for(auto c:ans)cout<<c<<' ';
    cout<<endl;


}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}








