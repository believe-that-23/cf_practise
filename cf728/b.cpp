#include <bits/stdc++.h>
#include <cmath>
#include <regex>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ll long long
#define all(x) (x).begin(), (x).end()
#define getunique(v)                                  \
    {                                                 \
        sort(v.begin(), v.end());                     \
        v.erase(unique(v.begin(), v.end()), v.end()); \
    }
#define vll vector<long long int>
#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL)
using namespace std;
#define endl "\n"
ll C(ll n, ll k)
{
    double res = 1;
    for (int i = 1; i <= k; ++i)
        res = res * (n - k + i) / i;
    return (ll)(res + 0.01);
}
vector<vll> readGraph(ll n, ll m)
{
    vector<vll> g(n);
    for (ll i = 0; i < m; i++)
    {
        ll a, b;
        cin >> a >> b;
        //sc.read(a,b);
        //a--;b--;
        g[a].pb(b);
        g[b].pb(a);
    }
    return g;
}
vector<vll> readTree(int n)
{
    return readGraph(n, n - 1);
}
//----------------------------------------------------------------------------
void solve()
{
    ll n;
    cin >> n;
    vll a(n);
    for (auto &c : a)
    {
        cin >> c;
    }
    set<pair<ll, ll>> s;
    for (ll i = 0; i < n; i++)
    {
        s.insert({a[i], i + 1});
    }
    ll cnt = 0;
    for (auto c : s)
    {
        ll temp = c.fi;
        ll cc = 1;
        while (temp <= 2 * n)
        {
            ll z = temp - c.se;
            if (s.count({cc, z})&&mp(c.fi,c.se)!=mp(cc,z)){
                cnt++;
            }
            cc++;
            temp = c.fi*cc;
        }
    }
    cout << cnt/2 << endl;
}
int main()
{
    FAST;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
