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
    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    map<ll, ll> m[n];
    vll cnt(27);
    for (ll i = 0; i < n; i++)
    {
        ll z = s[i] - 'a';
        cnt[z]++;
        for (ll j = 0; j < 26; j++)
            m[i][j] = cnt[j];
    }
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        vll v(26);
        ll ans = 0;
        if (l != 1)
        {
            for (auto c : m[l - 2])
            {
                v[c.fi] = c.se;
            }
        }
        for (auto c : m[r - 1])
        {
            ans += (c.fi + 1) * (c.se - v[c.fi]);
        }
        cout << ans << endl;
    }
}
int main()
{
    FAST;
    ll t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}