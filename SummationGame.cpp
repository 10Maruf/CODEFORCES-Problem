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
    int n, k, x;
    cin >> n >> k >> x;
    vec a(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        a[i] = x;
    }
    sort(a.begin(), a.end());
    int pref[n + 1];
    pref[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        pref[i] = a[i] + pref[i - 1];
    }
    int ans = INT_MIN;
    for (int i = n; i >= 0; i--)
    {
        int ch = (n - i);
        if (ch > k)
            break;
        int r = min(i, x);
        int sum = (pref[i - r] - (pref[i] - pref[i - r]));

        ans = max(ans, sum);
    }

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
