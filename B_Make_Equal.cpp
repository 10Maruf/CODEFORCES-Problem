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
    vec v(n);
    ll sum = 0;
    bool flag = true;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    ll equal = sum / n;
    if (double(sum / n) != equal)
    {
        NO;
        return;
    }
    else
    {

        ll prefix = 0;
        for (ll i = 0; i < n; i++)
        {
            prefix += v[i] - equal;
            if (prefix < 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            YES;
        else
            NO;
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
