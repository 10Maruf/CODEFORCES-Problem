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
#define YES puts("Yes")
#define NO puts("No")
#define endl '\n'
/*
 "The harder the problem, the sweeter the victory. Keep coding!"
*/

int Case = 1;

void solve()
{
    ll n, temp, zero = 0;

    cin >> n;
    string s;
    cin >> s;
    ll one = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            one++;
        }
        
    }
    temp = sqrt(n);
    if (one == 4 * (temp - 1) and sqrt(n) == temp)
        YES;
    else
        NO;
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
