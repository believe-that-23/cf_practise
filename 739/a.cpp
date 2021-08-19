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

vll a;

void solve()
{
    ll k;
    cin>>k;
    cout<<a[k-1]<<endl;
}
int main() {
for(ll i=1;i<4000;i++){
    if(i%3==0||i%10==3)continue;
    a.pb(i);
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








