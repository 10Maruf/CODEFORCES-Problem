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
    string s;
    cin >> s;
    char row[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    for (int i = 1; i <= 8; i++)
    {
        if (i != s[1] - '0')
        {
            /* code */
            cout << s[0] << i << endl;
        }
    }
    for (int i = 0; i < 8; i++)
    {
        if (row[i] != s[1]&&row[i]!=s[0])
            cout << row[i] << s[1] - '0' << endl;
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
