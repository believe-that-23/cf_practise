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
    ll x,n;
    cin>>x>>n;
    if(n==0){
        cout<<x<<endl;
        return;
    }
    if(x&1){
        x++;
        ll num=(n-1)/4;
        x+=4*num;
        ll left=(n-1)%4;
        ll z=0;
        if(left!=0){
            while(left--){
                ll f=n-z;
                if(f&1){
                    ll pos=(f-1)/2;
                    pos+=1;
                    if(pos&1)x+=f;
                    else x-=f;
                }
                else{
                    ll pos=(f-2)/2;
                    pos+=1;
                    if(pos&1)x-=f;
                    else x+=f;
                }
                z++;
            }
        }
    }
    else{
        x--;
        ll num=(n-1)/4;
        x-=4*num;
        ll left=(n-1)%4;
        ll z=0;
        if(left!=0){
            while(left--){
                ll f=n-z;
                if(f&1){
                    ll pos=(f-1)/2;
                    pos+=1;
                    if(pos&1)x-=f;
                    else x+=f;
                }
                else{
                    ll pos=(f-2)/2;
                    pos+=1;
                    if(pos&1)x+=f;
                    else x-=f;
                }
                z++;
            }
        }
    }
    cout<<x<<endl;

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








