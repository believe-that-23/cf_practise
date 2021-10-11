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
    ll n,x;
    cin>>n>>x;
    vll a(n);
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
    }
    vll b=a;
    sort(all(b));
    for (ll i = 0; i < n; i++) {
        if(a[i]!=b[i]){
            ll z=max(abs(n-1-i),i);
            if(z<x){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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








