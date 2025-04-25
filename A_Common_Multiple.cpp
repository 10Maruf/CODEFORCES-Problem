/*maruf_bro*/

#include <bits/stdc++.h>
using namespace std;
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ll long long
#define vec vector<ll>

/*
 "The harder the problem, the sweeter the victory. Keep coding!"
*/

void solve()
{
    int n;
    cin >> n;
    map<int, int> m;

    while (n-- > 0)
    {
        int val;
        cin >> val;
        m[val]++;
    }
    cout << m.size() << endl;
}

signed main()
{
    IO;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}