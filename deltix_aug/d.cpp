#include <bits/stdc++.h>
#define pb push_back
#define all(x) x.begin(),x.end()
using namespace std;
typedef long long ll;

ll And(ll a,ll b){
    cout<<"and "<<a+1<<" "<<b+1<<endl;
    ll x;
    cin>>x;
    return x;
}
ll Or(ll a,ll b){
    cout<<"or "<<a+1<<" "<<b+1<<endl;
    ll x;
    cin>>x;
    return x;
}

int main() {
     ll n,k;
     cin>>n>>k;
     vector<ll> a(n);
     ll c=And(0,1)+Or(0,1);
     ll d=And(0,2)+Or(0,2);
     ll e=And(1,2)+Or(1,2);
     a[0]=(c+d-e)/2;
     a[1]=(c+e-d)/2;
     a[2]-(d+e-c)/2;
     for (ll i = 3; i < n; i++) {
         ll t=And(0,i)+Or(0,i);
         a[i]=t-a[0];
     }
     sort(all(a));
     cout<<"finish "<<a[k-1]<<endl;
     return 0;
}
