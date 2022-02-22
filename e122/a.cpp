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
//#define ordered_set tree<pair<ll,ll>,null_type,less<pair<ll,ll>>,rb_tree_tag,tree_order_statistics_node_update>

//-----------------------------------------------------------

vll a;
vll b;

void solve()
{
    ll n;
    cin>>n;
    ll ans=INT_MAX;
    string s=to_string(n);
    ll f_ans=-1;
    if(s.size()==2){
        for(auto c:a){
            ll temp=0;
            string t=to_string(c);
            for(ll i=0;i<2;i++){
                if(s[i]!=t[i]){
                    temp++;
                }
            }
            if(temp<ans){
                ans=temp;
                f_ans=c;
            }
        }
    }
    else{
        for(auto c:b){
            ll temp=0;
            string t=to_string(c);
            for(ll i=0;i<3;i++){
                if(s[i]!=t[i]){
                    temp++;
                }
            }
            if(temp<ans){
                ans=temp;
                f_ans=c;
            }
        }
    }
    cout<<f_ans<<endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    ll temp=14;
    a.pb(14);
    while(temp<1000){
        if(temp<100){
            a.pb(temp);
        }
        else b.pb(temp);
        temp+=7;
    }
    for(int i=1;i<=t;i++){
//        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}








