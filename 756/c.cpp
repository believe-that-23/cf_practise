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
    vll a(n);
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
    }
    if(a.front()!=n&&a.back()!=n){
        cout<<-1<<endl;
        return;
    }
    deque<ll> ans;
    ans.pb(n);
    if(a.front()==n){
        ll l=1,r=n-1;
        while(l<=r){
            if(a[l]<a[r]){
                ans.push_front(a[l]);
                l++;
                if(l==r){
                    ans.pb(a[r]);
                    break;
                }
            }
            else{
                ans.pb(a[r]);
                r--;
                if(l==r){
                    ans.push_front(a[l]);
                    break;
                }
            }
        }
    }
    else{
        ll l=0,r=n-2;
        while(l<=r){
            if(a[l]<a[r]){
                ans.push_front(a[l]);
                l++;
                if(l==r){
                    ans.pb(a[r]);
                    break;
                }
            }
            else{
                ans.pb(a[r]);
                r--;
                if(l==r){
                    ans.push_front(a[l]);
                    break;
                }
            }
        }
    }
    for (ll i = 0; i < n; i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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








