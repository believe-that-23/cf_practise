#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define endl "\n"
#define fi first
#define se second
#define pb push_back
#define ppb pop_back()
#define pf push_front
#define ppf pop_front()
#define eb emplace_back
#define mp make_pair
#define ll long long
#define lld long double
#define all(x) (x).begin(),(x).end()
#define vll vector<long long int>
using namespace std;
using namespace __gnu_pbds;
//#define ordered_set tree<pair<ll,ll>,null_type,less<pair<ll,ll>>,rb_tree_tag,tree_order_statistics_node_update>

//-----------------------------------------------------------


void solve()
{
    string s;
    cin>>s;
    int n=(int)s.size();
    bool flag=false;
    int ans;
    for (int i = 0; i < n-1; i++) {
        int z=s[i]-'0';
        z+=s[i+1]-'0';
        string t="";
        t=s[i];
        t+=s[i+1];
        string k=to_string(z);
//        if(k.back()=='0')k.ppb;
        if(t.size()==k.size()){
            if(k>t){
                s[i]=k[0];
                s[i+1]=k[1];
                cout<<s<<endl;
                return;
            }
            else{
                ans=i;
                flag=true;
            }
        }
    }
    if(flag){
        for (int i = 0; i < n; i++) {
            if(i==ans){
                ll z=s[i]-'0';
                z+=s[i+1]-'0';
                cout<<z;
                i++;
                continue;
            }
            cout<<s[i];
        }
    }else{
        flag=false;
        for (int i = 0; i < n; i++) {
            if(i==0){
                ll z=s[i]-'0';
                z+=s[i+1]-'0';
                cout<<z;
                i++;
                flag=true;
                continue;
            }
            cout<<s[i];
        }
    }
    cout<<endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
//        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}








