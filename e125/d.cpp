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
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

//-----------------------------------------------------------


void solve()
{
    ll n,c;
    cin>>n>>c;
    vector<array<ll,3>> v(n);
    for(ll i=0;i<n;i++){
        for(ll j=0;j<3;j++){
            cin>>v[i][j];
        }
    }
    ll m;
    cin>>m;
    vector<array<ll,2>> mon(m);
    for(ll i=0;i<m;i++){
        for(ll j=0;j<2;j++){
            cin>>mon[i][j];
        }
    }

    for(ll i=0;i<m;i++){
        ll l=1,r=c;
        ll ans=-1;
        while(l<=r){
            ll mid=l+(r-l)/2;
            bool flag=false;
            for(ll j=0;j<n;j++){
                ll z=mid/v[j][0];
                ll d=v[j][1]*z;
                ll h=v[j][2]*z;
                if(h*d>mon[i][1]*mon[i][0]){
                    flag=true;
                    break;
                }
            }
            if(flag){
                r=mid-1;
                ans=mid;
            }
            else{
                l=mid+1;
            }
        }
        cout<<ans<<" ";
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
//	if (fopen("input.txt", "r"))
//	{
//		freopen("input.txt", "r", stdin);
//		freopen("output.txt", "w", stdout);
//	}
    int t=1;
    for(int i=1;i<=t;i++){
//        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}








