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

    for (ll i = 0; i < n; i++) {
        cin>>a[i];
    }
    sort(all(a));

    a[1]+=a[0];

    ll l=1;
    ll r=n-1;
    while(l<r){
        if(a[l]<a[r]){
            cout<<"YES"<<endl;
            return;
        }
        else {
            l++;
            r--;
            a[l]+=a[l-1];
            a[r]+=a[r+1];
        }
    }

    cout<<"NO"<<endl;

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








