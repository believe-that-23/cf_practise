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
    ll n;
    cin>>n;
    vll a(n);
    vll cnt(n+1);
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
        cnt[a[i]]++;
    }
    vll ans(n+1);
    ll bck=0;
    ll lst=INT_MAX;
    for(ll i=0;i<=n;i++){
        if(i==0){
            ans[i]=cnt[i];
            lst=i;
        }
        else{
            if(ans[i-1]==-1){
                ans[i]=-1;
                continue;
            }
            if(cnt[i-1]){
                ans[i]=bck+cnt[i];
                lst=i-1;
            }
            else{
                ans[i]=cnt[i];
                ll j;
                j=lst;
                while(j>=0&&cnt[j]<=1){
                    j--;
                }
                if(j==-1){
                    ans[i]=-1;
                    lst=j;
                    continue;
                }
                bck+=i-1-j;
                ans[i]+=bck;
                cnt[j]--;
                cnt[i-1]++;
                lst=j;
            }
        }
    }
    for(auto c:ans)cout<<c<<" ";
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








