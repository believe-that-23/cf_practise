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
    ll n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vll a(n),pref(n+1);
    for (ll i = 0; i < n; i++) {
        a[i]=s[i]=='+'?1:-1;
        if(i&1)a[i]*=-1;
        pref[i+1]=pref[i]+a[i];
    }
    while(q--){
        ll l,r;
        cin>>l>>r;
        if(pref[r]-pref[l-1]==0){
            cout<<0<<endl;
            continue;
        }
        if((pref[r]-pref[l-1])&1){
            cout<<1<<endl;
        }else{
            cout<<2<<endl;
        }
    }
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








