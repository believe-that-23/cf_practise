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
    if(n==2){
        if(a||b){
            cout<<-1<<endl;
        }
        else cout<<1<<" "<<2<<endl;
        return;
    }
    ll mx=n%2==0?(n-2)/2:(n-1)/2;
    if(max(a,b)>mx){
        cout<<-1<<endl;
        return;
    }
    if(abs(a-b)>1){
        cout<<-1<<endl;
        return;
    }
    vll x;
    for (ll i = 0; i < n; i++) {
        x.pb(i+1);
    }
    ll cnt=0;
    if(b>a){
        for (ll i = 0; i < n; i+=2) {
            swap(x[i],x[i+1]);
            if(cnt==a)break;
            cnt++;
        } 
    }
    if(a>b){
        for(ll i=n-1;i>=0;i--){
            swap(x[i],x[i-1]);
            if(cnt==b)break;
            cnt++;
        }
    }
    if(a==b){
        if(a==mx){
            if(n&1){
                cout<<-1<<endl;
                return;
            }
        }
        cnt=a;
        ll k=1;
        vll y,z;
        for (ll i = n/2-1; i >= 0; i--) {
            y.pb(i+1); 
        }
        for(ll i=n-1;i>=n/2;i--){
            z.pb(i+1);
        }
        while(cnt--){
            cout<<y.back()<<" ";
            y.pop_back();
            cout<<z.back()<<" ";
            z.pop_back();
        }
        while(!y.empty()){
            cout<<y.back()<<" ";
            y.pop_back();
        }
        while(!z.empty()){
            cout<<z.back()<<" ";
            z.pop_back();
        }
        cout<<endl;
        return;
    }
    for(auto c:x)cout<<c<<" ";
    cout<<endl;
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








