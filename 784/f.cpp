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
    ll n;
    cin>>n;
    vll a(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    ll s=a[n-1];
    set<pair<ll,ll>> t;
    t.insert({s,n-1});

    for(int i=n-2;i>=0;i--){
        s+=a[i];
        t.insert({s,i});
    }
    ll ans=0;
    s=0;
    for(int i=0;i<n;i++){
        s+=a[i];
        auto x=t.lower_bound({s,i+1});
        if(x==t.end()){
            continue;
        }
        if(x->fi==s){
            ans=max(ans,n-(x->se)+i+1);
        }
    }
    cout<<ans<<endl;
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






