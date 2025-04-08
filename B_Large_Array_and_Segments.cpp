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

void solve()
{
    ll n, k;
    ll x;
    cin >> n >> k >> x;
    vec a(n);
    for (ll i = 0; i < n; ++i)
        cin >> a[i];
    vec pf(n);
    pf[n - 1] = a[n - 1];
    for (ll i = n - 2; i >= 0; i--)
    {
        pf[i] = pf[i + 1] + a[i];
    }
    ll s = pf[0];
    if (x > k * s)
    {
        cout << 0 << endl;
        return;
    }
    ll r = x % s, q = x / s;
    if (r == 0)
    {
        q--;
        r = s;
    }
    ll ans = n * k - (q * n);
    for (ll i = n - 1; i >= 0; i--)
    {
        if (pf[i] >= r)
        {
            break;
        }
        ans--;
    }
    cout << ans << endl;
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
