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
ll MOD = (1e9 + 7);
ll INV2 = (5e8 + 4);
void solve()
{
    ll n;
    string str;
    cin >> n;
    cin >> str;
    ll ans = 0;

    for (ll i = n - 1; i > 0; --i)
    {
        ans = (ans + (str[i] == '1')) * INV2 % MOD;
    }
    cout << ans + n - 1 << endl;
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
