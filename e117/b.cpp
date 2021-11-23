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
    ll n,a,b;
    cin>>n>>a>>b;
    if(a<b){
        set<ll> c;
        set<ll> d;
        ll i=b+1;
        c.insert(a);
        d.insert(b);
        while(i<=n){
            c.insert(i);
            i++;
        }
        i=1;
        while(i<a){
            d.insert(i);
            i++;
        }
        i=a+1;
        while(i<b&&c.size()<d.size()){
            c.insert(i);
            i++;
        }
        while(i<b&&d.size()<c.size()){
            d.insert(i);
            i++;
        }
        ll cnt=0;
        while(i<b){
            if(cnt&1){
                c.insert(i);
                cnt=0;
            }else{
                d.insert(i);
                cnt=1;
            }
            i++;
        }
        if(c.size()==d.size()){
            for(auto x:c)cout<<x<<" ";
            for(auto x:d)cout<<x<<" ";
            cout<<endl;
        }
        else cout<<-1<<endl;
    }
    else{
        if(a==b+1&&b+(n-a+1)==n){
            for(ll i=n;i>n/2;i--){
                cout<<i<<" ";
            }
            for(ll i=n/2;i>=1;i--){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else cout<<-1<<endl;
        return;
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








