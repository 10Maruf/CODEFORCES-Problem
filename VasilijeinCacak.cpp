/*maruf_bro*/

#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define vec vector<int>
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
#define ll long long
/*
 "The harder the problem, the sweeter the victory. Keep coding!"
*/

void solve()
{
   ll n, k, x;
    cin >> n >> k >> x;
    ll ceil = n * (n + 1) - (n - k) * (n - k + 1);
    ll flr = k * (k + 1);
    if ((2 * x) >= flr && (2 * x) <= ceil)
    {
        YES;
    }
    else
        NO;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
