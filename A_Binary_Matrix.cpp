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
    ll n, m, rcnt = 0, ccnt = 0;
    cin >> n >> m;
    vector<string> matrix(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> matrix[i];
    }

    for (ll i = 0; i < n; i++)
    {
        ll rxor = 0;
        for (ll j = 0; j < m; j++)
        {

            rxor ^= (matrix[i][j] - '0');
        }
        if (rxor == 1)
            rcnt++;
    }
    for (ll i = 0; i < m; i++)
    {
        ll cxor = 0;
        for (ll j = 0; j < n; j++)
        {

            cxor ^= (matrix[j][i] - '0');
        }
        if (cxor == 1)
            ccnt++;
    }
    cout << max(rcnt, ccnt) << endl;
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
