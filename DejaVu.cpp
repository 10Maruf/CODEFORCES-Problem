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
    int p, q;
    cin >> p >> q;
    vec a(p);
    fcin(a);
    ll x;
    int minimum = 30;
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        if (x < minimum)
        {
            for (int j = 0; j < p; j++)
                if (a[j] % (int)pow(2, x) == 0)
                    a[j] += pow(2, x - 1);
            minimum = x;
        }
    }

    fcout(a);
    cout << endl;
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
