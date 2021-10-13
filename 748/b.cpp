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
    string s;
    cin>>s;
    ll ans=INT_MAX;
    string t=s;
    ll a1=0;
    ll a2=0;
    while(1){
        if(s.back()=='0'||s.size()==0)break;
        a1++;
        s.pop_back();
    }
    ll n=s.size();
    for (ll i = n-2; i >= 0; i--) {
        if(s[i]=='0'||s[i]=='5'){
            ans=min(ans,n-2-i+a1);
            break;
        }
    }
    s=t;
    while(1){
        if(s.back()=='5'||s.size()==0)break;
        a2++;
        s.pop_back();
    }
    n=s.size();
    for(ll i=n-2;i>=0;i--){
        if(s[i]=='7'||s[i]=='2'){
            ans=min(ans,n-2-i+a2);
            break;
        }
    }

    cout<<ans<<endl;


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








