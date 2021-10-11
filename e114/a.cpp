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
    ll nn=n;
    string p="()";
    if(n==1){
        cout<<"()"<<endl;
        return;
    }
    ll cnt=1;
    while(n--){
        string s="";
        ll j=nn-cnt;
        for (ll i = 0; i < j; i++) {
            cout<<"(";
        }
        for (ll i = 0; i < cnt; i++) {
            cout<<p;
        }
        for (ll i = 0; i < n; i++) {
            cout<<")";
        }
        cnt++;
        cout<<endl;
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








