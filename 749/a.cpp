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

bool check(ll n){
    for(ll i=2;i*i<=n;i++){
        if(n%i==0)return true;
    }
    return false;
}

void solve()
{
    ll n;
    cin>>n;
    vll a(n);
    ll sum=0;
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
        sum+=a[i];
    }
    if(check(sum)){
        cout<<n<<endl;
        for (ll i = 0; i < n; i++) {
            cout<<i+1<<" ";
        }
        cout<<endl;
        return;
    }
    for (ll i = 0; i < n; i++) {
        ll z=sum-a[i];
        if(check(z)){
            cout<<n-1<<endl;
            for (ll j = 0; j < n; j++) {
                if(i==j)continue;
                cout<<j+1<<" ";
            }
            cout<<endl;
            return;
        }
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








