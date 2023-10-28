/*maruf_bro*/

#include <bits/stdc++.h>
using namespace std;
#define YES puts("YES")
#define NO puts("NO")
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
#define endl '\n'
/*
 "The harder the problem, the sweeter the victory. Keep coding!"
*/

int Case = 1;

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    vec v(2);
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }
    if (mp.size() >= 3)
    {
        NO;
        return;
    }
    if (mp.size() == 1)
    {
        YES;
        return;
    }
    int i = 0;
    for (auto y : mp)
    {
        v[i] = y.second;
        i++;
    }
    bool result = false;
    if (abs(v[0] - v[1]) >= 2)
    {
        result = true;
    }
    if (result)
    {
        NO;
    }
    else
        YES;
}

signed main()
{
    IO;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
