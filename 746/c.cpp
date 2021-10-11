#include <bits/stdc++.h>
using namespace std;
int t,n,k,a[100005],u,v,sz[100005],X;
vector<int> e[100005];
void dfs(int u,int f){
    sz[u]=0;
    for(auto v:e[u])if(v!=f)dfs(v,u),a[u]^=a[v],sz[u]+=sz[v];
    if (!sz[u]&&a[u]==X)sz[u]++;
    if (sz[u]&&!a[u])sz[u]++;
}
int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
        cin>>n>>k;X=0;
        for (int i=0;i<n;i++)cin>>a[i],X^=a[i],e[i].clear();
        for (int i=0;i<n-1;i++){
            cin>>u>>v;
            u--,v--;
            e[u].push_back(v),e[v].push_back(u);
        }
        dfs(0,-1);
        cout<<(!X||(k>=3&&sz[0]>=2)?"YES\n":"NO\n");
    }
    return 0;
}
