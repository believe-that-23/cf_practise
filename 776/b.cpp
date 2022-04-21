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
    ll l,r,a;
    cin>>l>>r>>a;
    if(a==1){
        cout<<r<<endl;
        return;
    }
    ll z=r/a;
    z*=a;
    if(z>l&&z<=r){
        ll ans=(z-1)%a;
        ans+=(z-1)/a;
        ans=max(ans,r/a+r%a);
        cout<<ans<<endl;
    }
    else{
        ll ans=r%a;
        ans+=r/a;
        cout<<ans<<endl;
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
    cin>>t;
    for(int i=1;i<=t;i++){
//        cout<<"case #"<<i<<": ";
        solve();
    }
    return 0;
}








