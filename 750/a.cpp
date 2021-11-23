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
    vll a(3);
    vll b(3);
    ll c1=0;
    ll c2=0;

    for (ll i = 0; i < 3; i++) {
        cin>>a[i];
        b[i]=a[i]%2;
        if(b[i])c1++;
        else c2++;
    }
    if(c1==3||c2==3){
        cout<<0<<endl;
        return;
    }
    if(c1>c2){
        if(b[0]&&b[2]){
            cout<<0<<endl;
        }
        else cout<<1<<endl;
    }
    else{
        if(b[1]==0&&b[2]==0){
            cout<<0<<endl;
        }else{
            cout<<1<<endl;
        }
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








