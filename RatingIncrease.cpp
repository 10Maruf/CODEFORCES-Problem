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

    for (int i = 1; i < (int)s.size(); ++i)
    {
        if (s[0] != '0' && s[i] != '0')
        {
            string a = s.substr(0, i);
            string b = s.substr(i, 8 - i);

            if (stoi(a) < stoi(b))
            {
                cout << a << " " << b << '\n';
                return;
            }
        }
    }
    cout << -1 << '\n';
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
