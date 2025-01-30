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
    int n, d;
    cin >> n >> d;

    vec a = {1};
    if (n > 2 || d % 3 == 0)
        a.push_back(3);
    if (d == 5)
        a.push_back(5);
    if (d == 7 || n > 2)
        a.push_back(7);
    if (d == 9 || (d % 3 == 0 && n > 2) || n >= 6)
        a.push_back(9);

    for (int x : a)
        cout << x << " ";
    cout << endl;
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
