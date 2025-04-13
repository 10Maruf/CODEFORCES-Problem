/*maruf_bro*/

#include <bits/stdc++.h>
using namespace std;
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ld long double
#define ll long long
#define vec vector<ll>
#define pb push_back
#define fcin(n)       \
    for (auto &x : n) \
    cin >> x
#define fcout(n)     \
    for (auto x : n) \
    cout << x << " "
#define YES puts("YES")
#define NO puts("NO")
#define endl '\n'

int Case = 1;

void solve()
{
    string a, b;
    cin >> a >> b;

    if (b.size() < a.size() || b.size() > 2 * a.size())
    {
        NO;
        return;
    }

    vector<pair<char, ll>> ag;
    char c = a[0];
    ll n = 1;
    for (ll i = 1; i < a.size(); i++)
    {
        if (a[i] == c)
        {
            n++;
        }
        else
        {
            ag.pb({c, n});
            c = a[i];
            n = 1;
        }
    }
    ag.pb({c, n});

    vector<pair<char, ll>> bg;
    c = b[0];
    n = 1;
    for (ll i = 1; i < b.size(); i++)
    {
        if (b[i] == c)
        {
            n++;
        }
        else
        {
            bg.pb({c, n});
            c = b[i];
            n = 1;
        }
    }
    bg.pb({c, n});

    if (ag.size() != bg.size())
    {
        NO;
        return;
    }

    for (ll i = 0; i < ag.size(); i++)
    {
        char ac = ag[i].first;
        ll an = ag[i].second;
        char bc = bg[i].first;
        ll bn = bg[i].second;
        if (ac != bc || bn < an || bn > 2 * an)
        {
            NO;
            return;
        }
    }
    YES;
}

signed main()
{
    IO;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}