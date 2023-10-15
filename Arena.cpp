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
#define ll long long
/*
 "The harder the problem, the sweeter the victory. Keep coding!"
*/

void solve()
{
    vec v;
    ll n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    sort(v.begin(), v.end());
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[0] == v[i])
        {
            count++;
        }
    }
    cout << (v.size() - count) << endl;
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
