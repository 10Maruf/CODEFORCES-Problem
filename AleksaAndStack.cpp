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
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
#define ll long long
/*
 "The harder the problem, the sweeter the victory. Keep coding!"
*/

void solve()
{
    ll n;
    cin >> n;
    vec v(n);
    v[0] = 2;
    for (int i = 1, j = 3; i < n; i++, j++)
    {
        if ((j + v[i - 1]) % 3 == 0)
        {
            j++;
        }
        v[i] = j;
    }
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
