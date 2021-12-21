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
#define ordered_set tree<pair<ll,ll>,null_type,less<pair<ll,ll>>,rb_tree_tag,tree_order_statistics_node_update>

//-----------------------------------------------------------


void solve()
{
    ll n,k,x;
    cin>>n>>k>>x;
    string s;
    cin>>s;
    if(x==1){
        for (ll i = 0; i < n; i++) {
            if(s[i]!='*')cout<<s[i];
        }
        return;
    }
    if(k==0){
        for (ll i = 0; i < n; i++) {
            if(s[i]!='*')cout<<s[i];
        }
        cout<<endl;
        return;
    }
    vll cnt;
    for (ll i = 0; i < n; i++) {
        ll t=i;
        if(s[i]=='a'){
            cnt.pb(-1);
            continue;
        }
        if(s[i]=='*'){
            while(i<n&&s[i]=='*'){
                i++;
            }
            if(i+1-t!=0)
                cnt.pb(i-t);
            i--;
        }
    }
    ll temp=1;
    deque<ll> d;
    ll c=0;
    for(ll i=cnt.size()-1;i>=0;i--){
        ll laga=0;
        if(cnt[i]!=-1){
            if(c==0)
                laga=cnt[i]*k;
                laga++;
                d.pb(laga);
                continue;
            }
            c=i;
            break;
        }
    }
    vector<pair<ll,ll>> ans;
    for(auto i=c-1;i>=0;i--){
        bool flag=false;
        if(cnt[i]!=-1){
            temp=pow(cnt[i]+1,d.front());
            if(temp>=k){
                ll z=0;
                while(true){
                    ll z=pow(z,d.front());
                    while(z<=x){
                        z++;
                    }
                    z--;
                    x-=pow(z,d.front());
                    x.ppf;
                    ans.pb(i,z);
                }
                if(x==0){
                    flag=true;
                    break;
                }
            }
            else d.pf(temp);
        }
        if(flag)break;
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








