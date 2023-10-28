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
    string s1, s2, s;
    cin >> s1 >> s2;
    int m = s1.size(), n = s2.size();
    int count = n - m;
    for (int i = 0; i < count; i++)
    {
        s += '0';
    }
    s += s1;
    int ind = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s2[i])
        {
            ind = i;
            break;
        }
    }
    if (ind == -1)
        cout << 0 << endl;
    else
    {
        int len = n - ind - 1;
        int ans = 9 * len;
        int val = abs(s2[ind] - s[ind]);
        ans += val;
        cout << ans << endl;
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
