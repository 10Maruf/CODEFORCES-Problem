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
ll binarySearch(ll n, ll b, ll c, ll d);

void solve()
{
    ll n, b, c, d;
    cin >> n >> b >> c >> d;

    ll ans = binarySearch(n, b, c, d);
    // ll ans = binarySearch(n, b, c, d);

    ll opps2 = (ans + 1) / 2;
    vec v1;
    for (size_t i = 0; i < 5; i++)
    {
        /* code */
    }

    ll kurama = opps2 * c + d * ans;
    b = b - kurama;
    //     #define fcout(n)     \
//     for (auto x : n) \
//     cout << x << " "
    // #define YES puts("YES")
    // #define NO puts("NO")
    // #define endl '\n'
    if (b < 0)
    {
        b = 0;
    }
    // ll ans = binarySearch(n, b, c, d);

    ll k = opps2 + (b / c) + (b % c != 0);
    // ll k = opps2 + (b / c) + (b % c != 0);
    ll result = n - k;
    cout << result << endl;
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
ll binarySearch(ll n, ll b, ll c, ll d)
{
    ll opps = (n - n % 7) / 7 + 1;
    if (n % 7 == 0)
    {
        opps -= 1;
    }
    else
    {
        opps -= 0;
    }

    ll left = 1, right = opps;
    ll ans = opps;

    while (left <= right)
    {
        ll middle = (left + right) / 2;
        if (b <= (middle + 1) / 2 * c + d * middle)
        {
            ans = middle;
            right = middle - 1;
        }
        else
        {
            left = middle + 1;
        }
        //       if (n % 7 == 0)
        // {
        //     opps -= 1;
        // }
        // else
        // {
        //     opps -= 0;
        // }
    }

    return ans;
}