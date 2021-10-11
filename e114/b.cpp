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
    vll a(3);
    ll m;
    ll cnt=0;
    bool poss=false;
    for (ll i = 0; i < 3; i++) {
        cin>>a[i];
        if(a[i]==0)poss=false;
        if(a[i])
            cnt+=a[i]-1;
    }
    cin>>m;
    if(cnt<m){
        cout<<"NO"<<endl;
        return;
    }
    sort(all(a));
    for (ll i = 0; i < 3; i++) {
        a[i]-=a[0]; 
    }
    ll paires=a[2]-a[1];
    if(!poss){
        ll y = paires/2;
        ll x = y;
        if(x)x--;
        ll z=paires=y;
        if(z)x--;
        if(x+z>m)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    else{
        if(paires)paires--;
        if(paires>m)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
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








