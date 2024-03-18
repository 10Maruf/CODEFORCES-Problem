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
    int n;
    cin >> n;
    char grid[n][n];
    // int sum = 0;
    // int sum1 = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }
    for (size_t i = 0; i < n; i++)
    {

        for (size_t j = 0; j < n; j++)
        {
            if (grid[i][j] == '1')
            {
                if (grid[i + 1][j] == '1' && grid[i][j + 1] == '1')
                {
                    cout << "SQUARE" << endl;
                    return;
                }
                else
                    cout << "TRIANGLE" << endl;
                return;
            }
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
