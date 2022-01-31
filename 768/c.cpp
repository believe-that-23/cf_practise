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
//#define ordered_set tree<pair<ll,ll>,null_type,less<pair<ll,ll>>,rb_tree_tag,tree_order_statistics_node_update>

//-----------------------------------------------------------


void solve()
{
    ll n,k;
    cin>>n>>k;
    if(n==4&&k==3){
        cout<<-1<<endl;
        return;
    }
    if(k==n-1){
        cout<<n-1<<" "<<n-2<<endl;
        cout<<0<<" "<<2<<endl;
        cout<<1<<" "<<n-3<<endl;
        ll m=n/2;
        ll l=m-1,r=m;
        while(l>2){
            if(l==k){
                cout<<r<<" "<<0<<endl;
                r++,l--;
                continue;
            }
            if(r==k){
                cout<<l<<" "<<0<<endl;
                r++,l--;
                continue;
            }
            cout<<l<<" "<<r<<endl;
            l--,r++;
        }

    }
    else{
        ll z=n-1;
        cout<<k<<" "<<z<<endl;;
        ll m=n/2;
        ll l=m-1,r=m;
        while(l>0){
            if(l==k){
                cout<<r<<" "<<0<<endl;
                r++,l--;
                continue;
            }
            if(r==k){
                cout<<l<<" "<<0<<endl;
                r++,l--;
                continue;
            }
            cout<<l<<" "<<r<<endl;
            l--,r++;
        }
    }
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








