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
    vll p(n);
    for (ll i = 0; i < n; i++) {
        cin>>p[i];
    }
    deque<ll> ans;
    ans.pb(p[0]);
    for (ll i = 1; i < n; i++) {
        if(p[i]<ans.front()){
            ans.push_front(p[i]);
        }
        else{
            ans.pb(p[i]);
        }
    }
    for(auto c:ans)cout<<c<<" ";
    cout<<endl;
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








