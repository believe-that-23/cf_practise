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

// check all divisors of differences between the elements
ll n;
vll a;
vll divisors(ll n){
    vll v;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            v.pb(i);
            v.pb(n/i);
        }
    }
    sort(all(v));   
    v.erase(unique(all(v)),v.end());
    return v;
}
bool check(ll nn){
    map<ll,ll> cnt;
    for(auto c:a){
        ll z=c%nn;
        while(z<0)z+=nn;
        cnt[z]++;
    }
    ll k=0;
    for(auto c:cnt){
        k=max(k,c.se);
    }
    if(2*k>=n)return true;
    else return false;
}
void solve()
{
    cin>>n;
    a.assign(n,0);
    map<ll,ll> m;
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
        m[a[i]]++;
    }
    for(auto c:m){
        if(c.se>=n/2){
            cout<<-1<<endl;
            return;
        }
    }
    sort(all(a));
    ll ans=-1;
    for (ll i = 0; i < n; i++) {
        for (ll j = i+1; j < n; j++) {
            ll diff=a[j]-a[i];
            vll c=divisors(diff);
            for(auto x:c){
                if(check(x)){
                    ans=max(ans,x);
                }
            }
        }
    }
    cout<<ans<<endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}








