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
    auto is_p=[&](string s){
        string t;
        t=s;
        reverse(all(t));
        if(s==t)return 1;
        else return 0;
    };
    if(is_p(s)){
        cout<<0<<endl;
        return;
    }
    ll ans=INT_MAX;
    for(char c='a';c<='z';c++){
        string t="";
        for (ll i = 0; i < n; i++) {
            if(s[i]!=c){
                t.pb(s[i]);
            }
        }
        if(is_p(t)){
            string z=s;
            ll l=0,r=n-1;
            ll cnt=0;
            while(l<=r){
                if(s[l]==s[r]){
                    l++;
                    r--;
                    continue;
                }
                if(s[l]==c)l++;
                else r--;
                cnt++;
            }
            ans=min(ans,cnt);

        }
    }
    if(ans==INT_MAX)cout<<-1<<endl;
    else 
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








