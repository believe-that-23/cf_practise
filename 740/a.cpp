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
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
        b[i]=a[i];
    }
    ll ans=0;
    sort(all(b));
    if(a==b){
        cout<<0<<endl;
        return;
    }
    bool flag=false;
    for (ll i = 0; i < n; i++) {
        flag=false;
        if(i%2==0){
            for (ll j = 0; j < n; j+=2) {
                if(j<n-1&&a[j]>a[j+1]){
                    swap(a[j],a[j+1]); 
                    flag=true;
                }
            }
        }else{
            for (ll j = 1; j < n; j+=2) {
                if(j<n-1&&a[j]>a[j+1]){
                    swap(a[j],a[j+1]);
                    flag=true;
                }
            }
        }
        ans++;
        if(a==b)break;
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








