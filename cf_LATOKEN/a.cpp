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
#define FAST ios_base :: sync_with_stdio (false); cin.tie (NULL)
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
string pattern1[55];
string pattern2[55];
void solve()
{
    ll n, m;
    cin >> n >> m;
    string s[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    bool flag1 = true;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (s[i][j] != pattern1[i][j] && s[i][j] != '.')
            {
                flag1 = false;
                break;
            }
        }
    }
    bool flag2 = true;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (s[i][j] != pattern2[i][j] && s[i][j] != '.')
            {
                flag2 = false;
                break;
            }
        }
    }
    if (!flag1 && !flag2)
    {
        cout << "NO" << endl;
        return;
    }
    if (flag1)
    {
        cout << "YES" << endl;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cout << pattern1[i][j];
            }
            cout << endl;
        }
        return;
    }
    if (flag2)
    {
        cout << "YES" << endl;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cout << pattern2[i][j];
            }
            cout << endl;
        }
        return;
    }
}
int main()
{
    for (ll i = 0; i < 55; i++)
    {
        for (ll j = 0; j < 55; j++)
        {
            if ((i + j) % 2 == 0)
                pattern1[i].pb('R');
            else
                pattern1[i].pb('W');
        }
    }
    for (ll i = 0; i < 55; i++)
    {
        for (ll j = 0; j < 55; j++)
        {
            if ((i + j) % 2 == 1)
                pattern2[i].pb('R');
            else
                pattern2[i].pb('W');
        }
    }
    FAST;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}