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
    vec arr(n);
    int sum = 0;
    for (auto &i : arr)
    {
        cin >> i;
        sum += i;
    }

    if (sum % 3 == 0)
    {
        cout << 0 << endl;
        return;
    }

    for (auto it : arr)
    {
        if ((sum - it) % 3 == 0)
        {
            cout << 1 << endl;
            return;
        }
    }
    if ((sum + 1) % 3)
        cout << 2 << endl;
    else
        cout << 1 << endl;
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
