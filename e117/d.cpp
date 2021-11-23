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
    ll a,b,x;
    cin>>a>>b>>x;
    if(x>max(a,b)){
        cout<<"no"<<endl;
        return;
    }
    //if(a==b) not possible
    //a->|a-b|
    //b->|a-b|
    //check if i reach x
    if(a>b)swap(a,b);
    while(a){
        if(a==x||b==x){
            cout<<"yes"<<endl;
            return;
        }
        if(x>a&&x<b&&x%a==b%a){
            cout<<"yes"<<endl;
            return;
        }
        b=b%a;
        swap(a,b);
    }
    cout<<"no"<<endl;
    
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t=1;
    cin>>t;
    for(ll i=1;i<=t;i++){
//        cout<<"case #"<<i<<": ";
        solve();
    }
    return 0;
}








