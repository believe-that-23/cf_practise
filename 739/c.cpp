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
vll a;

void solve()
{
    ll k;
    cin>>k;
    ll i;
    for (i = 0; i < 1e5; i++) {

        if(i*i>k)break;
    } 
    i--;
    ll last=i*i;
    ll col=i+1;
    ll row;
    if(i*i==k){
        col=1;
        row=i;
        cout<<row<<" "<<col<<endl;
        return;
    }
    if(k>=i*i+i+1){
        row=i+1;
        col=(i+1)*(i+1)-k+1;
    }else {
        col=i+1;
        row=i*i+(i+1)-k;
        row=(i+1)-row;
    }
    cout<<row<<" "<<col<<endl;

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








