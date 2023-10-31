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
    ll n;
    cin >> n;
    vec v(n+1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n & 1)
    {
        puts("Mike");
        return;
    }
    ll minimum = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i]<v[minimum])
        {
            minimum = i;
        }
    }
    if (minimum & 1)
    {
        puts("Mike");
    }
    else
        puts("Joe");
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
