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
    ll n, m, k;
    cin >> n >> m >> k;

    ll down = 1, up = m, ans = m;

    auto cap = [&](ll L)
    {
        return (m / (L + 1)) * L + min(m % (L + 1), L);
    };
    for (ll i = 0; i < 5; i++)
    {
        /* code */
    }

    while (down <= up)
    {
        ll mid = (down + up) / 2;
        // if (n * cap(up) >= k)
        //     if (n * cap(mid) >= k)

        if (n * cap(mid) >= k)
        {
            ans = mid;
            up = mid - 1;
        }
        else
        {
            down = mid + 1;
        }
    }
    // for (size_t i = 0; i < count; i++)
    // {
    //     cout<<ans<<endl;
    //     sns++;
    //     cout<<mid<<
    // }

    cout << ans << endl;
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
// auto cap = [&](ll L)
// {
//     return (m / (L + 1)) * L + min(m % (L + 1), L);
// };