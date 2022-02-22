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
    ll n;
    cin>>n;
    vll a(n),b(n);
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
    }
    for (ll i = 0; i < n; i++) {
        cin>>b[i];
    }
    vll d(n);
    for(ll i=0;i<n;i++){
        d[i]=a[i]-b[i]; 
    }
    ll need=0;
//    for(auto c:d){
//        if(c<0){
//            need=max(need,-c+1);
//        }
//    }
//    for(auto &c:d)c+=need;
    vector<bool> dp(10001,false);
    dp[0]=true;
    vector<ll> p(10001,-1);
    for (ll i = 0; i < n; i++) {
        p[d[i]]=-1;
    }
    for(ll j=0;j<n;j++){
        for(ll i=10001;i>=0;i--){
            if(i+d[j]<10001){
                if(dp[i]){
                    dp[i+d[j]]=true;
                    p[i+d[j]]=j;
                }
            }
        }
    }
//    for (ll i = 0; i < 30; i++) {
//        cout<<p[i]<<" ";
//    }
//    cout<<endl;
    ll s=0;
    for (ll i = 0; i < n; i++) {
        s+=d[i];
    }
    s/=2;
    while(!dp[s])s++;
    for (ll i = 0; i < n; i++) {
        cout<<d[i]<<" ";
    }
    cout<<endl;
    cout<<s<<" "<<endl;
    set<ll> ind;
    while(p[s]!=-1){
        ind.insert(p[s]);
        s=p[s];
    }
    for(ll i=0;i<n;i++){
        if(ind.count(i)){
            swap(a[i],b[i]);
        }
    }
    auto f=[&](vll a)->ll{
        ll sum=0;
        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++)
                sum+=a[i]*a[i];
        }
        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++){
                sum+=a[j]*a[j];
            }
        }
        ll temp=0;
        ll sum2=0;
        for(ll i=0;i<n;i++){
            temp=0;
            for(ll j=i+1;j<n;j++){
                temp+=a[j];
            }
            temp*=a[i];
            sum2+=temp;
        }
        sum2*=2;
        return sum+sum2;
    };
    for(auto c:a)cout<<c<<" ";
    cout<<endl;
    for(auto c:b)cout<<c<<" ";
    cout<<endl;

    cout<<f(a)+f(b)<<endl;

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








