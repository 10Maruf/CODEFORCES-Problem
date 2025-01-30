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
    ll a1, a2, a4, a5, a3;
    cin >> a1 >> a2 >> a4 >> a5;
    int t1, t2, t3;
    int ans = 3;

    t1 = a1 + a2;
    t2 = a4 - a2;
    t3 = a5 - a4;

    if (t1 != t2)
        ans--;
    if (t1 != t3 && t2 != t3)
        ans--;

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
