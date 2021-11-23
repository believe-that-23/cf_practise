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
    ll n=s.size();
    ll cab=0;
    ll cba=0;
    for (ll i = 0; i < n-1; i++) {
        if(s[i]=='a'&&s[i+1]=='b')cab++;
        if(s[i]=='b'&&s[i+1]=='a')cba++;
    }
    if(cab==cba){
        cout<<s<<endl;
        return;
    }
    if(cab>cba){
        if(s[0]=='a'&&s[1]=='b'){
            s[0]='b';
            cout<<s<<endl;
        }else{
            s[n-1]='a';
            cout<<s<<endl;
        }
    }else{
        s[n-1]='b';
        cout<<s<<endl;
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








