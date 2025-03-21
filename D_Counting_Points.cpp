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
    ll n, m;
    cin >> n >> m;
    map<ll, ll> cnt;
    vector<ll> a(n), r(n);
    fcin(a);
    fcin(r);
    for (ll i = 0; i < n; i++)
    {
        ll pos = a[i], rr = r[i];
        for (ll x = pos - rr; x <= pos + rr; x++)
        {
            cnt[x] = max(cnt[x], 2 * (ll)sqrt(rr * rr - (x - pos) * (x - pos)) + 1);
        }
    }
    ll ans = 0;
    for (const auto &p : cnt)
        ans += p.second;

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
