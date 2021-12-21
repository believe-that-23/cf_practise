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


void solve()
{
    ll a,s;
    cin>>a>>s;
    string b="";
    while(a){
        ll z=a%10;
        ll y=s%10;
        ll x=s%100;
        if(z>y){
            x-=z;
            if(x<0||x>9){
                cout<<-1<<endl;
                return;
            }
            b+=to_string(x);
            s/=100;
        }
        else{
            y-=z;
            if(y<0||y>9){
                cout<<-1<<endl;
                return;
            }
            b+=to_string(y);
            s/=10;
        }
        a/=10;
    }
    while(s){
        ll x=s%10;
        b+=to_string(x);
        s/=10;
    }
    while(b.back()=='0')b.ppb;
    reverse(all(b));
    cout<<b<<endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
//        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}








