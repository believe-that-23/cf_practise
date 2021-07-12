#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        map<ll,ll> mm;
        for (ll i = 0; i < m; i++) {
            mm[i]=0;
        }
        for (ll i = 0; i < n; i++) {
            char ch;
            for (ll j = 0; j < m; j++) {
                cin>>ch;
                mm[j]+=ch-'a';
            }
        }
        
        for (ll i = 0; i < n-1; i++) {
            char ch;
            for (ll j = 0; j < m; j++) {
                cin>>ch;
                mm[j]-=ch-'a';
            
            }
        
        }
        for (ll i = 0; i < m; i++) {
            ll z=mm[i]+97;
            char ch=z;
            cout<<ch;
        }
        cout<<endl;
    }
    
return 0;
}
