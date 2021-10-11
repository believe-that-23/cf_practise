#include <bits/stdc++.h>
#define endl "\n"
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ll long long
#define ld long double
#define all(x) (x).begin(),(x).end()
#define vll vector<long long int>
using namespace std;

//-----------------------------------------------------------


void solve()
{
    ll n;
    cin>>n;
    vll a(n);
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
    }
    ll left=0,right=n-1;
    vector<pair<ll,ll>> ans;
    while(left<right){
        if(a[left]==0){
            left++;
            continue;
        }
        if(a[right]==0){
            right--;
            continue;
        }
        if(a[left]&&a[right]){
            ans.pb({left+1,right+1});
            a[left]--;
            a[right]--;
        }
    }
    cout<<ans.size()<<endl;
    for(auto c:ans){cout<<c.fi<<" "<<c.se<<endl;}


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








