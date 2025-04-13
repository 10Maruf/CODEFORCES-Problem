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
    ll n, q;
    cin >> n >> q;
    vec a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (ll query = 0; query < q; ++query)
    {
        ll k, l, r;
        cin >> k >> l >> r;
        l--;
        r--;
        ll ans = 0;
        ll current_k = k;
        for (ll i = l; i <= r; ++i)
        {
            while (current_k % a[i] == 0)
            {
                current_k /= a[i];
            }
            ans += current_k;
            if (current_k == 1)
            {
                ans += (r - i);
                break;
            }
        }
        // while (temp % a[i] == 0)
        // {
        //     temp -= a[i];
        // }
        cout << ans << '\n';
    }
}
//             
//         }
//         cout << ans << '\n';
//     }
// }

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
