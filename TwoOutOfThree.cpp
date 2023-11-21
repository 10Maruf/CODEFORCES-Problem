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
    int n;
    cin >> n;

    vec v(n);
    fcin(v);
    map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        m[v[i]]++;
    }

    int cnt = 0;
    for (auto it : m)
    {
        if (it.second > 1)
        {
            cnt++;
        }
    }

    if (cnt < 2)
    {
        puts("-1");
        return;
    }

    int k = 2;
    int f = -1;
    for (int i = 0; i < n; i++)
    {

        if (m[v[i]] > 1 && k <= 3)
        {
            cout << k << " ";
            m[v[i]] = -1;
            k++;
        }
        else
        {
            cout << 1 << " ";
        }
    }

    cout << endl;
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
