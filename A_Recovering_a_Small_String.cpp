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
    char x;
    if (n >= 53)
    {
        n -= 52;
        x = n + 'a' - 1;
        cout << x << 'z' << 'z' << endl;
    }
    else if (n >= 28)
    {
        n -= 26;
        x = n - 1 + ('a' - 1);
        cout << 'a' << x << 'z' << endl;
    }
    else
    {
        x = n - 2 + ('a' - 1);
        cout << 'a' << 'a' << x << endl;
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
