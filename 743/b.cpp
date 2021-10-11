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
    vll b(n);
    map<ll,ll> s,t;
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
        s[a[i]]=i;
    }
    for (ll i = 0; i < n; i++) {
        cin>>b[i];
        t[b[i]]=i;
    }
    vll suff(n,INT_MAX);
    suff[n-1]=t[2*n];
    ll k=n-1;
    for(ll i=2*n-2;i>=2;i-=2){
        suff[k--]=min(suff[i],t[i+1]);
    }
    ll ans=INT_MAX;
    for(ll i=1;i<2*n;i++){
        ans=min(ans,s[i]+suff[i+1]);
    }
    cout<<ans<<endl;
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








