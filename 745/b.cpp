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
    ll n,m,k;
    cin>>n>>m>>k;
    k-=2;
    if(m<n-1||2*m>n*(n-1)||k<0){
        cout<<"NO"<<endl;
        return;
    }
    if(k==0){
        if(n==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return;
    }
    if(k==1){
        if(m==n*(n-1)/2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return;
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








