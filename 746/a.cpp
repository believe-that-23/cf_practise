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
    ll n,h;
    cin>>n>>h;
    vll a(n);
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
    }
    sort(all(a));
    if(a.back()>=h){
        cout<<1<<endl;
        return;
    }
    ll x=a[n-1];
    ll y=a[n-2];
    ll z=x+y;
    ll ans=(h+z-1)/z;
    if(ans*z-y>=h){
        ans*=2;
        ans--;
    }else{
        ans*=2;
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








