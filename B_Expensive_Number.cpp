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
    string n;
    cin >> n;

    int cnt = 0;
    int nonZero = 0;

    int i = n.size() - 1;
    while (i >= 0 && n[i] == '0')
    {
        cnt++;
        i--;
    }

    for (int j = 0; j <= i; j++)
    {
        if (n[j] != '0')
            nonZero++;
    }

    cout << cnt + nonZero - 1 << endl;
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
