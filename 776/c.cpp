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
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>> p(m);

    map<ll,ll> mm;
    for(ll i=0;i<m;i++){
        cin>>p[i].se>>p[i].fi;
        mm[p[i].se]=i;
    }
    sort(all(p));

    vll ans(2*n);
    ll sum=0;

    for(ll i=0;i<2*n;i++){
        ans[i]=p[i].se;
        sum+=p[i].fi;
    }

    sort(all(ans));

    cout<<sum<<endl;

    ll l=0,r=2*n-1;
    while(l<r){
        cout<<mm[ans[l]]+1<<" "<<mm[ans[r]]+1<<endl;
        l++,r--;
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
//        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}








