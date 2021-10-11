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
    string s[5];
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < 5; j++) {
            char c;
            cin>>c;
            s[i].pb(c);
        }
    }
    set<ll> x,y;
    for (ll i = 0; i < 5; i++) {
        x.clear();
        for (ll k = 0; k < n; k++) {
            if(s[k][i]=='1')
                x.insert(k);
        }
        for (ll j = i+1; j < 5; j++) {
            y.clear();
            for (ll z = 0; z < n; z++) {
                if(s[z][j]=='1')
                    y.insert(z);
            } 
            ll cnt=0;
            for(auto c:x){
                if(y.count(c)){
                    cnt++;
                }
            }
            ll zx=(ll)x.size()-cnt;
            ll zy=(ll)y.size()-cnt;
            ll zz=abs(zx-zy);
            if((cnt==zz)||(cnt-zz>0&&(cnt-zz)%2==0)){
                if(zx+zy+cnt==n){
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"NO"<<endl;
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








