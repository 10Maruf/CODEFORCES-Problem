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
    vec a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vec cnt1(30, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            if (a[i] & (1 << j))
            {
                cnt1[j]++;
            }
        }
    }

    ll max_sum = 0;
    for (int k = 0; k < n; k++)
    {
        ll sum = 0;
        for (int j = 0; j < 30; j++)
        {
            if (a[k] & (1 << j))
            {

                sum += (1LL << j) * (n - cnt1[j]);
            }
            else
            {

                sum += (1LL << j) * cnt1[j];
            }
        }
        max_sum = max(max_sum, sum);
    }

    cout << max_sum << "\n";
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
