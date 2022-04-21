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
    ll n,aa,b;
    cin>>n>>aa>>b;
    vll a(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    vll pref(n);
    vll vec(n);
    vec[0]=a[0];
    vll p(n);
    p[0]=a[0];
    for(int i=1;i<n;i++){
        vec[i]=a[i]-a[i-1];
        p[i]+=p[i-1]+a[i];
    }
    pref[0]=vec[0];
    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+vec[i];
    }

    ll ans=p[n-1]*b;
    for(int i=0;i<n-1;i++){
        ll temp=0;
        temp+=pref[i]*b;
        temp+=pref[i]*aa;
        temp+=(p[n-1]-p[i]-(n-i-1)*a[i])*b;
        ans=min(ans,temp);
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








