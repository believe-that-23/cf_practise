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


void solve()
{
    string s;
    cin>>s;
    int n=(int)s.size();
    if(n==1||s[0]=='B'||s.back()!='B'){
        cout<<"NO"<<endl;
        return;
    }
    int c1=0,c2=0;
    for (int i = 0; i < n; i++) {
        if(s[i]=='A'){
            c1++;
        }
        else c2++;
        if(c2>c1){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
//	if (fopen("input.txt", "r"))
//	{
//		freopen("input.txt", "r", stdin);
//		freopen("output.txt", "w", stdout);
//	}
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
//        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}








