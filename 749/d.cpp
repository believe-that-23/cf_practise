#include <bits/stdc++.h>
#define ll long long
#define vll vector<long long>
using namespace std;
ll query(vll a){
    cout<<"? ";
    for(ll x:a)cout<<x<<" ";
    cout<<endl;
    ll z;
    cin>>z;
    return z;
}
int main() {
    ll n;
    cin>>n;
    ll last=-1;
    for(ll i=1;i<n;i++){
        vll a(n,i);
        a[n-1]=n-i;
        ll pos=query(a);
        if(pos!=0){
            last=i;

            break;
        }
    }
    // now we know the last element of the array


        

    return 0;
}
