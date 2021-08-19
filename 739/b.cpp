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
    ll a,b,c;
    cin>>a>>b>>c;
    ll z=abs(a-b);
    if(z==1){
        cout<<-1<<endl;
        return;
    }
    z--;
    ll total=z*2+2;
    if(c>total||a>total||b>total){
        cout<<-1<<endl;
        return;
    }
    z++;
    ll ans=c+z;
    if(ans>total)ans-=total;
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








