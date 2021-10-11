#include <bits/stdc++.h>
#define endl "\n"
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ll long long
#define ld long double
#define all(x) (x).begin(),(x).end()
#define vll vector<long long int>
using namespace std;

//-----------------------------------------------------------


void solve()
{
    ll n;
    cin>>n;
    vll a(n);
    vll c(n);
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
        c[i]=a[i];
    }
    sort(all(c));
    vector<pair<ll,ll>> ans;
    ll k=0;
    while(1){
        if(a==c)break;
        ll as=-1;
        for (ll i = k; i < n; i++) {
            if(a[i]==c[k]){
                as=i;
                break;
            }
        }
        if(as!=k){
            ans.pb(mp(k+1,as+1));
            vll b(n);
            for(ll i=0;i<k;i++)b[i]=a[i];
            b[k]=c[k];
            for(ll i=k+1;i<=as;i++)b[i]=a[i-1];
            for(ll i=as+1;i<n;i++)b[i]=a[i];
            k++;
//            for(auto x:b)cout<<x<<" ";
//            cout<<endl;
            a=b;

        }
        else k++;
    }
    cout<<ans.size()<<endl;
    for(auto x:ans)cout<<x.fi<<" "<<x.se<<" "<<abs(x.fi-x.se)<<endl;

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
