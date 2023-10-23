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
    ll n, k, count = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {

        int x;

        cin >> x;

        if (abs(x - i) % k != 0)
        {

            count++;
        }
    }
    if (k == 1)
    {

        puts("0");
        return;
    }

    if (count == 0)
    {

        puts("0");
    }
    else if (count <= 2)
    {

        puts("1");
    }
    else
    {

        puts("-1");
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
