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
    ll n,k;
    cin>>n>>k;
    vll x(n);
    vll neg,pos;
    map<ll,ll> m1,m2;
    for (ll i = 0; i < n; i++) {
        cin>>x[i];
        if(x[i]<0)m1[-x[i]]++;
        else m2[x[i]]++;
    }
    ll ans=0;
    ll cnt=0;
    ll back;
    ll l1=0;
    ll l2=0;
    ll z=m.size();
    ll c=0;
    for(auto &c:m2){
        if(cnt+c.se<=k){
            cnt+=c.se;
            back=c.fi;
        }
        else{
            cnt=c.fi;
            if(
        }
    }
    cnt=0;
    back=-1;
    for(auto &c:m1){
        if(cnt+c.se>k){
            cout<<ans<<endl;
            ans+=2*back;
            cnt=c.se;
        }
        else{
            back=c.fi;
            cnt+=c.se;
        }
        l2=c.fi;
    }
    if(l1>l2){
        ans+=2*l2;
        ans+=l1;
    }
    else{
        ans+=2*l1;
        ans+=l2;
    }

    cout<<ans<<endl;
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








