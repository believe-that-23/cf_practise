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

ll binpow(ll a, ll b) {
ll ans = 1;
while (b) {
if (b & 1) {
ans = 1LL * ans * a;
}
a = 1LL * a * a;
b >>= 1;
}
return ans;
}
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll cnt=0;
    for (ll i = 0; i < n; i++) {
        if(s[i]=='0'&&n-i-1>=n/2){
            cout<<i+1<<" "<<n<<" "<<i+2<<" "<<n<<endl;
            return;
        }
    }
    for (ll i = 0; i < n; i++) {
        if(s[i]=='0'){
            cout<<1<<" "<<i+1<<" "<<1<<" "<<i<<endl;
            return;
        }
    }
    cout<<1<<" "<<n/2<<" "<<2<<" "<<n/2+1<<endl;
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
ll t;
cin>>t;
while(t--){
    solve();
}
return 0;
}








