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
    ll n, min1 = LLONG_MAX, min2 = LLONG_MAX;
    cin >> n;
    vector<vec> v(n);
    for (int i = 0; i < n; i++)
    {
        ll m;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            v[i].pb(x);
        }
        sort(v[i].begin(), v[i].end());
        min2 = min(v[i][1], min2);
        min1 = min(v[i][0], min1);
    }
    ll sum = min1, flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i][1] == min2 and flag == 0)
            flag = 1;
        else
        {
            sum += v[i][1];
        }
    }
    cout << sum << endl;
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
