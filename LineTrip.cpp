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
    ll size, threshold;
    cin >> size >> threshold;
    vec v(size + 1);
    // vec v(size + 1);
    v[0]=0;

    for (ll i = 1; i < size + 1; i++)
        cin >> v[i];
    // maxDifference = max(maxDifference, (v[i + 1] - v[i]));
    ll maxDifference = 0;
    bool isFlag = false;

    for (ll i=0;i<size;i++)
    {
        maxDifference = max(maxDifference, (v[i + 1] - v[i]));
    }
    //  if (isFlag)
    // {
    //     ll maxDifference2 = ((threshold - v[size]) * 2);
    //     maxDifference = max(maxDifference, maxDifference2);
    //     cout << maxDifference << endl;
    // }

    isFlag = true;

    if (isFlag)
    {
        ll maxDifference2 = ((threshold - v[size]) * 2);
        maxDifference = max(maxDifference, maxDifference2);
        // maxDifference = max(maxDifference, maxDifference2);
        cout << maxDifference << endl;
    }
}

signed main()
{
    // IO;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
