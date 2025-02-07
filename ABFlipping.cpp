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
    string str;
    cin >> str;

    int ans = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'B')
            ans--;
        else
            break;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (str[i] == 'A')
            ans--;
        else
            break;
    }

    if (ans >= 0)
        cout << ans << endl;
    else
        cout << 0 << endl;
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
