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

set<char> ss;
vector<string> t;
void solve()
{
    ll k;
    cin>>k;
    string s;
    cin>>s;
    for (ll i = 0; i < k; i++) {
        if(ss.count(s[i])){
            cout<<1<<endl<<s[i]<<endl;
            return;
        }
    }
    cout<<2<<endl;
    for(ll l=0;l<t.size();l++){
        bool pos=false;
        ll j=-1;
        for (ll i = 0; i < k; i++) {
            if(t[l][0]==s[i]){
                j=i;
                break; 
            }
        }
        if(j==-1)continue;
        for (ll i = j+1; i < k; i++) {
            if(t[l][1]==s[i]){
                pos=true;
                break;
            }
        }
        if(pos){
            cout<<t[l]<<endl;
            return;
        }
    }
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
ss.insert('1');
ss.insert('4');
ss.insert('6');
ss.insert('8');
ss.insert('9');
for(ll i=10;i<100;i++){
    for (ll j = 2; j < i; j++) {
        if(i%j==0){
            string c=to_string(i);
            t.pb(c);
        }
    }
}

ll t;
cin>>t;
while(t--){
    solve();
}
return 0;
}








