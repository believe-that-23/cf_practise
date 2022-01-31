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
    vll a(n);
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
    }
    vector<ll> cnt(n+1);
    vll b;
    ll i=0;
    while(true){
        ll mex=0;
        ll k=i;
        for (; i < n; i++) {
            cnt[a[i]]++;
            while(cnt[mex]){
                mex++;
            }
        }
        b.pb(mex);

        for(i=n-1;i>=0;i--){
            if(a[i]<mex){
                if(cnt[a[i]]>1){
                    cnt[a[i]]--;
                }
                else
                    break;
            }
        }
        if(mex==0){
            for(ll j=k+1;j<n;j++){
                b.pb(0);
            }
            break;
        }
        for(ll j=0;j<mex;j++){
            cnt[j]=0;
        }
//        cout<<i<<" i"<<endl;
        if(i>=n-1)break;
        i++;
    }
    cout<<b.size()<<endl;
    for(auto c:b)cout<<c<<" ";
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








