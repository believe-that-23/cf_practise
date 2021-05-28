#include <bits/stdc++.h>
#include <cmath>
#include <regex>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ll long long
#define all(x) (x).begin(),(x).end()
#define vll vector<long long int>
#define FAST ios_base :: sync_with_stdio (false); cin.tie (NULL)
using namespace std;
#define endl "\n"
ll C(ll n, ll k) {
    double res = 1;
    for (int i = 1; i <= k; ++i)
       res = res * (n - k + i) / i;
    return (ll)(res + 0.01);
}
vector<vll> readGraph(ll n,ll m){
    vector<vll> g(n);
    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        //sc.read(a,b);
        //a--;b--;
        g[a].pb(b);
        g[b].pb(a);
    }
    return g;
}
vector<vll> readTree(int n){
    return readGraph(n,n-1);
}
//----------------------------------------------------------------------------

bool possible(ll n){
   vll v(2);
   v[0]=11;
   v[1]=111;
    for(ll i=0;i<2;i++){
        if(n%v[i]==0)return true;
    }
    return false;
}
void solve()
{
   vll v(2);
   v[0]=11;
   v[1]=111;   
   ll z;
   cin>>z;
   bool flag=false;
   for(ll k=0;k<2;k++){
       if(z-v[k]<0)break;
       ll x=z;
       while(x-v[k]>=0){
           if(possible(x)){
               flag=true;
               goto y;
           }
           for(ll j=0;j<2;j++){
               if(j==k)continue;
               ll z=x-v[j];
               if(z<0)break;
               if(possible(z)){
                   flag=true;
                   goto y;
               }
           }
           x-=v[k];
       } 
   }
   y:
   if(flag)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}
int main() {
FAST;

ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}