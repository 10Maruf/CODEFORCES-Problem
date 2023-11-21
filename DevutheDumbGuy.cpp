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
vec v;
void solve()
{
    int x;
    cin >> x;
    v.pb(x);
}

signed main()
{
    IO;
    int t, h;
    cin >> t >> h;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    sort(v.begin(), v.end());
    ll sum = 0;
    for (int i = 0; i < t; i++)
    {
        if (h > 1)
        {

            sum += v[i] * h;
            h--;
        }

        else
        sum += v[i] * h;
    }
    cout << sum;
    return 0;
}
