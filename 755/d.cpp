#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
//#define endl "\n"
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

ll query(ll l,ll r){
    cout<<"? "<<l<<" "<<r;
    cout<<endl;
    ll x;
    cin>>x;
    return x;
}

void solve()
{
    ll n;
    cin>>n;
    ll z=query(1,n);

    ll l=1;
    ll r=n;
    vll ans(3);
    while(l<=r){
        ll mid=r+(l-r)/2;
        ll x=query(l,mid);
        if(x==0){
            r=mid;
            continue;
        }
        if(x<z){
            ll k=-1;
            if(mid>1){
                k=query(mid-1,n);
            }
            if(k==n){
                a[0]=mid-1;
                break;
            }
        }
        else{
            l=mid;
        }
    }
    r=n;
    while(l<=r){
        ll mid=r+(l-r)/2;
        ll x=query(l,mid);
        if(x==0){
            ll k=query(mid-1,r);
            if(k!=0){
                a[1]=mid;
                break;
            }
        }
    }
    l=a[0];
    r=a[1];
    while(l<=r){
        ll mid=r+(l-r)/2;
        ll x=query(l,mid);

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








