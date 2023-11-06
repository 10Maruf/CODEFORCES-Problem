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
map<ll, ll> m;
ll r;
int man = 0, final = 0;
void solve()
{
    char c;
    cin >> c >> r;
    if (c == '+')
    {
        m[r]++;
        man++;
    }
    else
    {
        if (m[r] > 0)
        {
            man--;
        }
        else
            final++;
    }
}

signed main()
{
    IO;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
        final = max(final, man);
    }
    cout << final;
    return 0;
}
