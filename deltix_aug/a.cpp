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
    ll c,d;
    cin>>c>>d;
    if(abs(c-d)&1){
        cout<<-1<<endl;
        return;
    }
    if(c==d&&c==0){
        cout<<0<<endl;
        return;
    }
    if(c==d){
        cout<<1<<endl;
        return;
    }
    cout<<2<<endl;
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








