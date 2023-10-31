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
    ll n, q;
    cin >> n >> q;
    vec prefix(n + 1);
    prefix[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> prefix[i];

        prefix[i] = prefix[i - 1] + prefix[i];
    }
    while (q--)
    {
        ll l, r, k;
        cin >> l >> r >> k;
        ll ans = prefix[n] - (prefix[r] - prefix[l - 1]) + k * (r - l + 1);
        if (ans & 1)
        {
            YES;
        }
        else
        {
            NO;
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
