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
    ll n, m;
    cin >> n >> m;
    vec ans(n, -1);
    set<int> s;
    int now = n - 1;
    for (int i = 0; i < m; ++i)
    {
        int x;
        cin >> x;
        if (s.find(x) == s.end() && now >= 0)
            ans[now] = i + 1, --now;
        s.insert(x);
    }
    for (int i = 0; i < n; ++i)
        cout << ans[i] << " ";
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
