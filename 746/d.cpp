#include<bits/stdc++.h>
#define ll long long 
#define vll vector<long long>
#define pb push_back
using namespace std;
ll query(vll a){
    ll n=a.size();
    cout<<"? "<<n<<" ";
    for (ll i = 0; i < n; i++) {
        cout<<a[i]+1<<" ";        
    }
    cout<<endl;
    ll x;
    cin>>x;
    return x;
}
int main(){
    ll n;
    cin>>n;
    vector<vll> adj(n);
    for (ll i = 0; i < n-1; i++) {
        ll u,v;
        cin>>u>>v;
        u--,v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    queue<ll> q;
    q.push(0);
    vector<bool> vis(n);
    vll x;
    for (ll i = 0; i < n; i++) {
        x.pb(i);
    }
    ll ans=query(x);
    while(!q.empty()){
        ll u=q.front();
        vis[u]=true;
        vll c;
        c.pb(u);
        q.pop();
        for(auto v:adj[u]){
            if(vis[v])continue;
            q.push(v);
            c.pb(v);
        }
        ll temp=query(c);
        if(temp==ans){
            x=c;
            break;
        }
    }
    ll root=x.front();
    while(1){
        ll l=0;
        ll r=x.size()-1;
        ll mid=(l+r)/2;
        vll a;
        for (ll i = 0; i < mid; i++) {
            a.pb(x[i]);
        }
        vll b;
        b.pb(root);
        for(ll i=mid;i<n;i++){
            b.pb(x[i]);
        }
        ll t1=query(a);
        ll t2=query(b);
        if(t1==ans){
            x=a;
            continue;
        }else{
            x=b;
        }
        if(x.size()==2)break;
    }
    cout<<"! "<<x[0]<<" "<<x[1]<<endl;
    return 0;
}





        


















