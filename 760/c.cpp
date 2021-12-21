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
    vll a(n);
    ll a1=0;
    ll a2=0;
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
        if(i&1){
            a2=__gcd(a2,a[i]);
        }
        else{
            a1=__gcd(a1,a[i]);
        }
    }
    bool flag=true;
    for (ll i = 0; i < n; i++) {
        if(i&1){
            if(a[i]%a2!=0){
                flag=false;
                break;
            }
        }
        else{
            if(a[i]%a2==0){
                flag=false;
                break;
            }
        }
    }
    if(flag){
        cout<<a2<<endl;
        return;
    }
    flag=true;
    for (ll i = 0; i < n; i++) {
        if(i%2==0){
            if(a[i]%a1!=0){
                flag=false;
                break;
            }
        }
        else{
            if(a[i]%a1==0){
                flag=false;
                break;
            }
        }
    }
    if(flag){
        cout<<a1<<endl;
        return;
    }
    cout<<0<<endl;
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








