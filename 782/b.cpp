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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int i;
    vector<int> ans(n);
    if(k==0){
        cout<<s<<endl;
        for(auto c:ans)cout<<c<<" ";
        cout<<endl;
        return;
    }
    if(k&1){
        bool flag=0;
        for(i=0;i<n;i++){
            if(s[i]=='1'){
                flag=1;
                break;
            }
        }
        if(!flag){
            i=n-1;
        }
        for(int j=0;j<n;j++){
            if(j!=i){
                if(s[j]=='1')s[j]='0';
                else s[j]='1';
            }
        }
        k--;
        ans[i]=1;
    }
    else{
        vector<int> ind;
        for(i=0;i<n;i++){
            if(s[i]=='0')ind.pb(i);
            if((int)ind.size()==2)break;
        }
        if((int)ind.size()==2){
            for(int j=0;j<n;j++){
                if(j==ind[0]||j==ind[1]){
                    s[j]='1';
                }
            }
            ans[ind[0]]+=1;
            ans[ind[1]]+=1;
        }
        else if((int)ind.size()==1){
            for(int j=0;j<n;j++){
                if(j==ind[0]){
                    continue;
                }
                if(s[j]=='1')s[j]='0';
                else s[j]='1';
            }
            for(int j=0;j<n-1;j++){
                if(s[j]=='1')s[j]='0';
                else s[j]='1';
            }
            ans[ind[0]]+=1;
            ans[n-1]+=1;
        }
        else{
            ans[n-1]=2;
        }
        k-=2;
    }
    vector<int> vec;
    for(i=0;i<n;i++){
        if(s[i]=='0'){
            vec.pb(i);
        }
    }
    reverse(all(vec));
    while((int)vec.size()>1&&k>1){
        ans[vec.back()]+=1;
        s[vec.back()]='1';
        vec.ppb;
        ans[vec.back()]+=1;
        s[vec.back()]='1';
        vec.ppb;
        k-=2;
    }
    if((int)vec.size()){
        if(k>1){
            k-=2;
            ans[vec[0]]+=1;
            ans[n-1]+=1;
            s[vec[0]]='1';
            if(s[n-1]=='1'){
                s[n-1]='0';
            }
            else s[n-1]='1';
        }
        else{
            for(i=0;i<(int)vec.size();i++){
                s[vec[i]]='0';
            }
        }
    }
    if(k){
        ans[n-1]+=k;
    }
    cout<<s<<endl;
    for(auto c:ans)cout<<c<<" ";
    cout<<endl;
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








