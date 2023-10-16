/*maruf_bro*/

#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define vec vector<int>
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
#define ll long long
/*
 "The harder the problem, the sweeter the victory. Keep coding!"
*/

int Case = 1;

void solve()
{
    string s;
    cin >> s;
    string x, y;
    for (int i = 0; i < s.size(); i++)
    {
        x += "()";
    }
    for (int i = 0; i < s.size(); i++)
    {
        y += "(";
    }
    for (int i = 0; i < s.size(); i++)
    {
        y += ")";
    }
    if (x.find(s) == string::npos) // not found
    {
        YES;
        cout << x << endl;
    }
    else if (y.find(s) == string::npos)
    {
        YES;
        cout << y << endl;
    }
    else
        NO;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
