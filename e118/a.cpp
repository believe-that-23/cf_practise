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
    ll x,p1,y,p2;
    cin>>x>>p1>>y>>p2;
    ll u=x;
    ll v=y;
    ll c1=0;
    ll c2=0;
    while(u){
        u/=10;
        c1++;
    }
    while(v){
        v/=10;
        c2++;
    }
    if(c1<c2){
        while(c1<c2){
            p2++;
            c1++;
            x*=10;
        }
    }else{
        while(c2<c1){
            p1++;
            c2++;
            y*=10;
        }
    }
    if(x<y){
        if(p1>p2)cout<<">"<<endl;
        else cout<<"<"<<endl;
    }
    if(x==y){
        if(p1>p2){
            cout<<">"<<endl;
        }else if(p1==p2){
            cout<<"="<<endl;
        }
        else cout<<"<"<<endl;
    }
    if(x>y){
        if(p2>p1)cout<<"<"<<endl;
        else cout<<">"<<endl;
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








