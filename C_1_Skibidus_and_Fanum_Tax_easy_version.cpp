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
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)

int Case = 1;

void solve()
{
    int n, m;
    cin >> n >> m;
    vec a(n);
    for (auto &x : a)
        cin >> x;
    ll X;
    cin >> X;
    bool dp0 = true, dp1 = true;
    for (int i = 1; i < n; i++)
    {
        bool new0 = false, new1 = false;
        ll cand0 = a[i], cand1 = X - a[i];
        if (dp0)
        {
            ll prev = a[i - 1];
            if (prev <= cand0)
                new0 = true;
            if (prev <= cand1)
                new1 = true;
        }
        if (dp1)
        {
            ll prev = X - a[i - 1];
            if (prev <= cand0)
                new0 = true;
            if (prev <= cand1)
                new1 = true;
        }
        dp0 = new0;
        dp1 = new1;
    }
    if (dp0 || dp1)
        YES;
    else
        NO;
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
