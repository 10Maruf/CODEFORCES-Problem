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
/*
 "The harder the problem, the sweeter the victory. Keep coding!"
*/

int Case = 1;

ll f(int n, int x, int y)
{
    if (n == 1)
    {
        if (x == 1 && y == 1)
            return 1;
        if (x == 2 && y == 2)
            return 2;
        if (x == 2 && y == 1)
            return 3;
        return 4;
    }
    int h = 1 << (n - 1);
    ll b = 1LL << (2 * (n - 1));
    if (x <= h && y <= h)
        return f(n - 1, x, y);
    if (x > h && y > h)
        return b + f(n - 1, x - h, y - h);
    if (x > h && y <= h)
        return 2 * b + f(n - 1, x - h, y);
    return 3 * b + f(n - 1, x, y - h);
}

pair<int, int> g(int n, ll d)
{
    if (n == 1)
    {
        if (d == 1)
            return {1, 1};
        if (d == 2)
            return {2, 2};
        if (d == 3)
            return {2, 1};
        return {1, 2};
    }
    int h = 1 << (n - 1);
    ll b = 1LL << (2 * (n - 1));
    if (d <= b)
    {
        auto p = g(n - 1, d);
        return {p.first, p.second};
    }
    if (d <= 2 * b)
    {
        auto p = g(n - 1, d - b);
        return {p.first + h, p.second + h};
    }
    if (d <= 3 * b)
    {
        auto p = g(n - 1, d - 2 * b);
        return {p.first + h, p.second};
    }
    auto p = g(n - 1, d - 3 * b);
    return {p.first, p.second + h};
}

void solve()
{
    int n, q;
    cin >> n >> q;
    while (q--)
    {
        string s;
        cin >> s;
        if (s == "->")
        {
            int x, y;
            cin >> x >> y;
            cout << f(n, x, y) << endl;
        }
        else
        {
            ll d;
            cin >> d;
            pair<int, int> p = g(n, d);
            cout << p.first << " " << p.second << endl;
        }
    }
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
