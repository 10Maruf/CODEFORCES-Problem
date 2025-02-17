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
    ll one = 0, zero = 0;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            one++;
        }
        else
        {
            zero++;
        }
    }
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            if (zero == 0)
                break;
            zero--;
        }
        else
        {
            if (one == 0)
                break;
            one--;
        }
    }

    cout << one + zero << endl;
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
