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
    ll x, n, m;
    cin >> x >> n >> m;
    if (x < log2(n))
    {
        cout << 0 << " " << 0 << endl;
    }
    else
    {
        // min
        ll min = 0, max = 0;
        ;
        int t = x;
        for (int i = 1; i <= n; i++)
        {
            t = t / 2;
            if (t == 0)
            {
                break;
            }
        }
        if (t == 0)
        {
            min = 0;
        }
        else
        {
            for (int i = 1; i <= m; i++)
            {
                if (t % 2 == 1)
                {
                    t = t / 2 + 1;
                }
                else
                {
                    t = t / 2;
                }
                if (t == 1)
                {
                    break;
                }
            }
            min = t;
        }

        // max
        t = x;
        for (int i = 1; i <= m; i++)
        {
            if (t % 2 == 1)
            {
                t = t / 2 + 1;
            }
            else
            {
                t = t / 2;
            }
            if (t == 1)
            {
                break;
            }
        }

        for (int i = 1; i <= n; i++)
        {

            t = t / 2;
            if (t == 0)
            {
                break;
            }
        }
        max = t;
        cout << max << " " << min << endl;
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
