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
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

//-----------------------------------------------------------

vll c;
vll b;
vll d;

void solve()
{
    ll n;
    cin>>n;
    ll cnt=0;
    ll m=n;
    for(ll i=b.size()-1;i>=0;i--){
        if(n>=b[i]){
            n-=b[i];
            cnt++;
        }
    }
    ll ans=INT_MAX;
    if(n==0)
        ans=cnt;

    cnt=0;
    for(ll i=c.size()-1;i>=0;i--){
        if(m>=c[i]){
            m-=c[i];
            cnt++;
            break;
        }
    }
    for(ll i=b.size()-1;i>=0;i--){
        if(m>=b[i]){
            m-=b[i];
            cnt++;
        }
    }
    if(m==0)
        ans=min(ans,cnt);

    if(ans==INT_MAX)cout<<-1<<endl;
    else 
        cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
//	if (fopen("input.txt", "r"))
//	{
//		freopen("input.txt", "r", stdin);
//		freopen("output.txt", "w", stdout);
//	}
    for(ll i=0;i<41;i++){
        ll z=(1LL<<i);
        b.pb(z);
        c.pb(z);
    }
    ll fact=1LL;
    d.pb(fact);
    for(ll i=2;i<16;i++){
        fact*=i;
        b.pb(fact);
        d.pb(fact);

    }
    sort(all(b));
    while(b.back()>1e12)b.ppb;
    b.erase(unique(all(b)),b.end());
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
//        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}








