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
vector<string> v,w,y;
void solve()
{
   ll n;
   cin>>n;
   string s;
   cin>>s;
   char c='a';
   bool flag=false;
   for(auto c:v){
       flag=false;
       for(ll i=0;i<n;i++){
           string temp="";
           temp.pb(s[i]);
           if(c==temp)flag=true;
       }
       if(!flag){
           cout<<c<<endl;
           return;
       }
   }
   for(auto c:w){
       flag=false;
       for(ll i=0;i<n-1;i++){
           string temp="";
           temp.pb(s[i]);
           temp.pb(s[i+1]);
           if(c==temp)flag=true;
       }
       if(!flag){
           cout<<c<<endl;
           return;
       }
   }
   for(auto c:y){
       flag=false;
       for(ll i=0;i<n-2;i++){
           string temp="";
           temp.pb(s[i]);
           temp.pb(s[i+1]);
           temp.pb(s[i+2]);
           if(c==temp)flag=true;
       }
       if(!flag){
           cout<<c<<endl;
           return;
       }
   }
    
}
int main() {
FAST;
char a='a';
for(ll i=0;i<26;i++){
    string temp="";
    temp.pb(a);
    v.pb(temp);
    a++;
}
a='a';
for(ll i=0;i<26;i++){
    char b='a';
    for(ll j=0;j<26;j++){
        string temp="";
        temp.pb(a);temp.pb(b);
        w.pb(temp);
        b++;
    }
    a++;
}
a='a';
for(ll i=0;i<26;i++){
    char b='a';
    for(ll j=0;j<26;j++){
        char c='a';
        for(ll k=0;k<26;k++){
            string temp="";
            temp.pb(a);temp.pb(b);temp.pb(c);
            y.pb(temp);
            c++;
        }
        b++;
    }
    a++;
}
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}