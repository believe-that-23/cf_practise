#include <bits/stdc++.h>
#include <cmath>
#include <regex>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ll long long
#define all(x) (x).begin(), (x).end()
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
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vll v;
    if (m >= n)
        m = n;
    v.pb(0);
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
            v.pb(0);
        else
            v.pb(1);
    }
    v.pb(0);
    while (m--)
    {
        vll temp;
        temp.pb(0);
        for (ll i = 1; i <= n; i++)
        {

            temp.pb(v[i]);
            if (v[i] == 0)
            {
                if ((v[i - 1] == 1 && v[i + 1] == 0) || (v[i - 1] == 0 && v[i + 1] == 1))
                {
                    temp.back() = 1;
                }
            }
        }
        temp.pb(0);
        v = temp;
    }
    for (ll i = 1; i <= n; i++)
        cout << v[i];
    cout << endl;
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