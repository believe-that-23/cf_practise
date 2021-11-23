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
    string b="";
    bool flag=false;
    ll pos;
    ll n=(ll)s.length();
    for(char c='a';c<='z';c++){
        for (ll i = 0; i < n; i++) {
            if(s[i]==c){
                b.pb(c);
                pos=i;
                flag=true;
                break;
            }
        }
        if(flag)break;
    }
    cout<<b<<" ";
    for (ll i = 0; i < n; i++) {
        if(i==pos)continue;
        else cout<<s[i];
    }
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








