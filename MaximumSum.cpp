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
const ll mod = 1e9 + 7;
int Case = 1;
ll powermod(ll x, ll y, ll p)
{
    ll res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
void solve()
{
    ll n, k, ans = 0, sum = 0, m = 0;
    cin >> n >> k;
    vec v(n);
    for (int i = 0; i < n; i++)//kadane algo
    {
        cin >> v[i];
        m += v[i];
        sum += v[i];
        if (sum < 0)
        {
            sum = 0;
        }
        ans = max(ans, sum);
    }
    m = ((m - ans) % mod + mod) % mod;
    ans %= mod;
    cout << (m % mod + ((powermod(2, k, mod) % mod * ans % mod) % mod) % mod) % mod << endl;
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
