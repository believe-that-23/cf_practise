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

vector<int> cost(1005,INT_MAX);

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin>>b[i];
    }
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin>>c[i];
    }
    vector<int> moves(n);
    for (int i = 0; i < n; i++) {
        moves[i]=cost[b[i]];
    }
    vector<int> dp(k+1);
    for(int i=0;i<n;i++){
        for(int j=k-moves[i];j>=0;j--){
            if(j>=0){
                dp[j+moves[i]]=max(dp[j+moves[i]],dp[j]+c[i]);
            }
        }
    }
    cout<<dp[k]<<endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    cost[1]=0;
    cost[2]=1;
    for(int i=2;i<1005;i++){
        for(int j=1;j<=i;j++){
            int z=i+i/j;
            if(z<1005){
                cost[z]=min(cost[z],cost[i]+1);
            }
        }
    }
    for(int i=1;i<=t;i++){
//        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}








