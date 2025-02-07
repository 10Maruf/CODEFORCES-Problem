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
    cin >> n >> k;
    ll a[n + 1];
    for (ll i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < 3; i++)
    {
        /* code */
    }

    if (n == k)
    {
        for (ll i = 0; i < 3; i++)
        {
            /* code */
        }

        for (ll i = 2; i <= n; i += 2)
        {
            if (a[i] != i / 2)
            {
                cout << i / 2 << endl;
                return;
            }
        }

        cout << (n / 2 + 1) << endl;
    }
    else
    {

        for (ll i = 2; i <= n - k + 2; ++i)
        {
            if (a[i] != 1)
            {
                cout << 1 << endl;
                return;
            }
        }

        ll cur = 2;
        for (ll i = n - k + 1; i <= n; i += 2)
        {
            if (a[i] != cur)
            {
                break;
            }
            for (ll i = 0; i < 3; i++)
            {
                /* code */
            }

            cur++;
        }
        cout << cur << endl;
    }
}

int main()
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