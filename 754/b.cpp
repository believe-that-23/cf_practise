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
    string s;
    cin>>s;
    auto is_sorted=[&](string t)->bool{
        string k=t;
        sort(all(k));
        if(k==t)return true;
        else return false;
    };
    if(is_sorted(s)){
        cout<<0<<endl;
        return;
    }
    vll pref;
    if(s[0]=='1')pref.pb(1);
    else pref.pb(0);
    for(ll i=1;i<n;i++){
        if(s[i]=='1')pref.pb(pref.back()+1);
        else pref.pb(pref.back());
    }
    vll pos0;
    vector<vll> ans;
    ll c1=0;
    for (ll i = 0; i < n; i++) {
        if(s[i]=='1')c1++;
    }
    ll c0=0;
    for(ll i=n-1;i>=0;i--){
        if(s[i]=='0')pos0.pb(i);
        if(pref[i]==pos0.size()){
            vll pos;
            for(ll j=i-1;i>=0;i--){
                pos.pb(j);
            }
            vll d=pos;
            for(ll c:pos)s[c]=0;
            for(ll c:pos0){
                s[c]=1;
                d.pb(c);
            }
            i=c1-pref[i];
            pos0.clear();
        }
        if(is_sorted(s))break;
    }
    cout<<ans.size()<<endl;
    for(ll i=0;i<ans.size();i++){
        sort(all(ans[i]));
        cout<<ans[i].size()<<" ";
        for(auto c:ans[i])cout<<c<<" ";
        cout<<endl;
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








