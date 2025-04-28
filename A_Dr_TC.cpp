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
    string s;
    cin >> n >> s;
    int ans = 0;
    for (char c : s)
    {
        if (c == '1')
            ans += n - 1;
        else
            ans += 1;
    }
    cout << ans << '\n';
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
// (cd "/e:/.Programming/CODEFORCES Problem/" && git add A_Dr_TC.cpp && git commit -m "maruf_bro" && git push)
