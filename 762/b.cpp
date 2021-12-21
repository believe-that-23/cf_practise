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

set<ll> s;
vll v;

void solve()
{
    ll n;
    cin>>n;
    auto z=lower_bound(all(v),n);
    if(*z==n){
        cout<<z-v.begin()+1<<endl;
    }
    else{
        z--;
        cout<<z-v.begin()+1<<endl;
    }

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    for(ll i=1;i<100005;i++){
        s.insert(i*i);
        s.insert(i*i*i);
    }
    while(!s.empty()){
        v.pb(*s.begin());
        s.erase(s.begin());
    }
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
//        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}








