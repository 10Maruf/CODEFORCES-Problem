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
    ll n, k, count = 0;
    string s;
    cin >> n >> k >> s;

    map<ll, ll> v;
    map<ll, ll> v1;
    vec c2;

    for (ll i = 0; i < n; ++i)
    {
        if (s[i] == 'B')
        {
            count++;
        }
    }

    if (count == k)
    {
        cout << 0 << endl;
        return;
    }
    // if (count == k)
    // {
    //     cout << 0 << endl;
    //     return;
    // }
    if (count < k)
    {
        ll count2 = k - count;
        for (ll i = 0; i < n; ++i)
        {
            if (s[i] == 'A')
            {
                count2 -= 1;
            }
            if (count2 == 0)
            {
                cout << 1 << endl;
                cout << i + 1 << " B" << endl;
                return;
            }
        }
        //     if (count2 == 0)
        //     {
        //         cout << 1 << endl;
        //         cout << i + 1 << " B" << endl;
        //         return;
        //     }
        // }
    }
    else
    {
        ll count2 = count - k;
        for (ll i = 0; i < n; ++i)
        {
            if (s[i] == 'B')
            {
                count2 -= 1;
            }
            if (count2 == 0)
            {
                cout << 1 << endl;
                cout << i + 1 << " A" << endl;
                return;
            }
        }
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
    }

    return 0;
}
