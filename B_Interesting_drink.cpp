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
    fcin(v);
    ll q;
    cin >> q;
    vec v2(q);
    fcin(v2);
    sort(v.begin(), v.end());
    for (int i = 0; i < q; i++)
    {
        cout << upper_bound(v.begin(), v.end(), v2[i]) - v.begin() << endl;
    }
}

signed main()
{
    IO;
    int t;
    // cin >> t;
    // while (t--)
    {
        solve();
    }

    return 0;
}
