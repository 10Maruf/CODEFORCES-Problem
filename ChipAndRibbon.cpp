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
    vec v1(n + 4);

    for (ll i = 1; i < n + 1; ++i)
    {
        cin >> v1[i];
    }
    // cout << v1[1] - 1 << endl;

    if (n == 1)
    {
        cout << v1[1] - 1 << endl;
    }
    else
    {
        vec v;
        map<ll,ll> mp;
        v.pb(1);
        // v.pb(0);

        for (ll i = 1; i < n + 1; ++i)
        {
            if (v1[i] != v[v.size() - 1])
            {
                v.pb(v1[i]);
            }
        }
        // cout << v1[1] - 1 << endl;

        ll result = 0;
        map<ll,ll> mp2;


        for (ll i = 0; i < v.size() - 1; ++i)
        {
            if (v[i] < v[i + 1])
            {
                result += (v[i + 1] - v[i]);
            }
        }
        cout << result << endl;
    }
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
int gcd(int a, int b)
{
    while (true)
    {
        if (a == 0)
            return b;
        b %= a;
        if (b == 0)
            return a;
        a %= b;
    }
}

int lcm(int a, int b)
{
    int temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}