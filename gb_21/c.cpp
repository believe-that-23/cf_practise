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

int minimumChanges(vector<int> &arr, int n, float d)
{
    int maxFreq = -1e9;
    map<float, int> freq;
 
    for (int i = 0; i < n; ++i) {
        float a0 = arr[i] - i*d;
        if (freq.find(a0) != freq.end()) {
            freq[a0]++;
        }
        else
            freq.insert(make_pair(a0, 1));
 
        if (freq[a0] > maxFreq)
            maxFreq = freq[a0];
    }
    return (n - maxFreq);
}

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }
    int ans=1e9;
    int mi=1e9,mx=-1e9;
    for(int i=1;i<n;i++){
        int diff=a[i]-a[i-1];
        mi=min(mi,diff);
        mx=max(mi,diff);
    }
    for(int i=mi;i<=mx;i++){
        for(int j=0;j<10;j++){
            float k=i+j*0.1;
            ans=min(ans,minimumChanges(a,n,k));
        }
    }
    cout<<ans<<endl;
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








