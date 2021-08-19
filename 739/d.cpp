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
const ll mod=1e9+7;

ll binpow(ll a, ll b) {
ll ans = 1;
while (b) {
if (b & 1) {
ans = 1ll * ans * a;
}
a = 1ll * a * a;
b >>= 1;
}
return ans;
}
vll a;
string s,t;
ll dp[50][50];
ll func(ll i,ll j)
{
   if(i==s.size()){
      return t.size()-j;
   }
   if(j==t.size()){
      return s.size()-i;
   }
   if(dp[i][j]!=-1)return dp[i][j];
   if(s[i]==t[j]){
      return dp[i][j]=func(i+1,j+1);
   }

   return dp[i][j]=func(i+1,j)+1;

}
void solve()
{
    cin>>s;
    ll ans=100;
    for (ll i = 0;i < 64; i++) {
        t="";
        ll z=a[i];
        while(z){
            t+=to_string(z%10);
            z/=10;
        }
        reverse(all(t));
//        cout<<t;
        memset(dp,-1,sizeof(dp));
        ll cnt=func(0,0);
        ans=min(ans,cnt);
        
    }

    cout<<ans<<endl;

}
int main() {
    for (ll i = 0; i < 64; i++) {
        ll z=binpow(2LL,i);
        a.pb(z);
    }
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
ll t;
cin>>t;
while(t--){
    solve();
}
return 0;
}








