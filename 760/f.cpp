#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define endl "\n"
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ll long long
#define lld long double
#define all(x) (x).begin(),(x).end()
#define vll vector<long long int>
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<pair<ll,ll>,null_type,less<pair<ll,ll>>,rb_tree_tag,tree_order_statistics_node_update>

//-----------------------------------------------------------


void solve()
{
    ll x,y;
    cin>>x>>y;
    auto f=[&](ll z)->string{
        vll cnt(61);
        string t="";
        for(ll i=0;i<61;i++){
            if(x&(1LL<<i))cnt[i]=1;
        }
        ll l=0,r=61;
        for(ll i=0;i<61;i++){
            if(cnt[i])l=i;
            break;
        }
        for(ll i=61;i>=0;i--){
            if(cnt[i])r=i;
            break;
        }
        for(ll i=l;i<=r;i++){
            if(cnt[i])t+='1';
            else t+='0';
        }
        return t;
    };
    string s=f(x);
    string k=f(y);
    if(s.size()>k.size()){
        cout<<"NO"<<endl;
        return;
    }
    auto fu=[&](string t)->bool{
        ll i=0;
        while(s[i]==k[i]){
            i++;
            if(i==s.size())break;
        }
        if(i==s.size()){
            return true;
        }
        i=s.size()-1;
        ll e=k.size()-1;
        while(s[i]==k[e]){
            i--;e--;
            if(i==-1)break;
        }
        if(i==-1)return true;
        return false;
    };
    if(fu(s)){
        cout<<"YES"<<endl;
        return;
    }
    reverse(all(s));
    if(fu(s)){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t=1;
    for(int i=1;i<=t;i++){
//        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}








