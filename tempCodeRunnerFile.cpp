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

int Case = 1;

void solve()
{
    vec a(5);
    a[0] = 1;
    string s;
    cin >> s;
    int i = 1;
    for (char c : s)
    {
        if (c - '0' == 0)
            a[i] = 10;
        else
            a[i] = c - '0';
        i++;
    }
    int ans = 0;
    for (int i = 0; i < 4; i++)
    {
        ans += abs(a[i] - a[i + 1]);
    }
    cout << ans + 4<<endl;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
