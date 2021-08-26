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
    ll a,b;
    cin>>a>>b;
    ll k=a+b;
    ll alice=(k+1)/2;
    ll bor=k/2;
    set<ll> ans;
    //a=(alice-x)+y
    //b=(bor-y)+x
    for (ll i = 0; i <= k; i++) {
        if(i>alice)break;
        ll y=a-(alice-i);
        if(y>=0&&y<=bor)ans.insert(i+y);
    }
    swap(alice,bor);

    for (ll i = 0; i <= k; i++) {
        if(i>alice)break;
        ll y=a-(alice-i);
        if(y>=0&&y<=bor)ans.insert(i+y);
    }
    cout<<ans.size()<<endl;
    for(auto c:ans)cout<<c<<" ";
    cout<<endl;
    

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









