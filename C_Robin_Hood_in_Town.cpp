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

    long long n;
    cin >> n;
    vector<long long> wealth(n);
    long long total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> wealth[i];
        total += wealth[i];
    }
    if (n <= 2)
    {
        cout << -1 << endl;
        return;
    }
    long long l = 0, r = LLONG_MAX, ans = -1;
    while (l <= r)
    {
        long long mid = (l + r) >> 1;
        long long newTotal = total + mid;
        long long avg = (newTotal + n - 1) / n;
        long long threshold = (avg % 2 == 0) ? (avg / 2) : ((avg + 1) / 2);
        long long unhappy = 0;
        for (auto w : wealth)
        {
            if (w < threshold)
                unhappy++;
        }
        if (unhappy > n / 2)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
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
