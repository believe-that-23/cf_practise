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
    string a;
    cin>>n>>a;
    ll ans=INT_MAX;
    ll a1=INT_MAX;
    ll a2=INT_MAX;
    for (ll i = 0; i < n; i++) {
        if(i+2>=n)break;
        map<ll,ll> m;
        m[a[i]-'a']++;
        m[a[i+1]-'a']++;
        m[a[i+2]-'a']++;
        if(m[0]>1){
            a1=3;
            break;
        }
    }
    for (ll i = 0; i < n; i++) {
        if(i+1>=n)break;
        map<ll,ll> m;
        m[a[i]-'a']++;
        m[a[i+1]-'a']++;
        if(m[0]>1){
            a2=2;
            break;
        }
    }
    ll f_ans=min({a1,a2,ans});
    if(f_ans==INT_MAX)cout<<-1<<endl;
    else cout<<f_ans<<endl;
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








