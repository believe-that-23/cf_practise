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
    vll b(n);
    for (ll i = 0; i < n; i++) {
        cin>>b[i];
    }
    ll sum=accumulate(all(b),0LL);
    ll z=n*(n+1)/2;
    if(sum%z!=0){
        cout<<"NO"<<endl;
        return;
    }
    sum/=z;
    if(sum<n){
        cout<<"NO"<<endl;
        return;
    }
    vll a(n);
    for(ll i=0;i<n;i++){
        if((b[(i+1)%n]-b[i]-sum)%n!=0){
            cout<<"NO"<<endl;
            return;
        }
        a[(i+1)%n]=-(b[(i+1)%n]-b[i]-sum)/n;
        if(a[(i+1)%n]<=0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    for (ll i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
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








