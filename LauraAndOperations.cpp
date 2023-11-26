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
    int x, y, z;
    cin >> x >> y >> z;
    if (!(abs(z - y) % 2 == 0))
    {
    // if (abs(y - x) % 2 == 0)
    // {
    //     cout << "1"
    //          << " "<<endl;
        cout << "0"
             << " ";
    }
    else
        cout << "1"
             << " ";
    if (!(abs(z - x) % 2 == 0))
    {
        cout << "0"
    // if (abs(z - x) % 2 == 0)
    // {
    //     cout << "1"
             << " ";
    }
    else
        cout << "1"
             << " ";
    //          << " ";
    // }
    // else
    //     cout << "0"
    //          << " ";
    if (!(abs(y - x) % 2 == 0))
    {
        cout << "0"
             << " "<<endl;
    // if (abs(y - x) % 2 == 0)
    // {
    //     cout << "1"
    //          << " "<<endl;
    }
    else
        cout << "1"
             << " "<<endl;
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
