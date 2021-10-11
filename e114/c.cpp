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
    ll sum=0;
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
        sum+=a[i];
    }
    sort(all(a));
    a.erase(unique(all(a)),a.end());
    ll m;
    cin>>m;
    n=a.size();
    for (ll i = 0; i < m; i++) {
        ll x,y;
        cin>>x>>y;
        ll ind=lower_bound(all(a),x)-a.begin();
        if(ind>=n)ind=n-1;
        ll ans=0;
        ll z=ind;
        if(a[ind]>x&&ind){
            ind--;
            ll temp=sum-a[ind];

            if(a[ind]<x)ans+=x-a[ind];
            if(temp<y)ans+=y-temp;
        }
        
//        cout<<ind<<"ind"<<endl;
        ll ans2=0;
        ind=z;
        ll temp=sum-a[ind];

        if(a[ind]<x)ans2+=x-a[ind];
        if(temp<y)ans2+=y-temp;
        cout<<min(ans,ans2)<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}








