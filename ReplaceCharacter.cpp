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
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < (int)s.size(); i++)
    {
        mp[s[i]]++;
    }
    int mn = 1e9, mx = 0;
    char a, b;
    for (auto x : mp)
    {
        int cnt = x.second;
        char ch = x.first;
        if (cnt >= mx)
        {
            mx = cnt;
            a = ch;
        }
        if (cnt < mn)
        {
            mn = cnt;
            b = ch;
        }
    }
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (b == s[i])
        {
            s[i] = a;
            break;
        }
    }
    cout << s << endl;
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
