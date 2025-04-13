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
    ll n;
    cin >> n;
    ll size = 2 * n;
    vec p(size + 1, 0);
    vector<bool> used(size + 1, false);

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            ll val;
            cin >> val;
            ll s = i + j;
            if (s <= size && p[s] == 0)
            {
                p[s] = val;
                used[val] = true;
            }
        }
    }

    for (ll num = 1; num <= size; num++)
    {
        if (!used[num])
        {
            p[1] = num;
            break;
        }
    }

    for (ll i = 1; i <= size; i++)
    {
        cout << p[i] << " ";
    }
    cout << "\n";
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
