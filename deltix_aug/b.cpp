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
    map<ll,ll> m;
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
        b[i]=a[i]%2;
        m[a[i]%2]++;
    }
    if(abs(m[0]-m[1])>1){
        cout<<-1<<endl;
        return;
    }
    ll ans=INT64_MAX;
    for(ll r=0;r<2;r++){
        vll x,y;
        for(ll i=r;i<n;i+=2)x.pb(i);
        for (ll i = 0; i < n; i++) {
            if(b[i]==0)y.pb(i);
        }
        if(x.size()==y.size()){
            ll c=0;
            for(ll i=0;i<x.size();i++){
                c+=abs(x[i]-y[i]);
            }
            ans=min(ans,c);
        }
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








