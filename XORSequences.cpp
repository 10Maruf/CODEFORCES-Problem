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
string decToBin(int n)
{
    return bitset<32>(n).to_string(); // Converts to 32-bit binary string
}
void solve()
{
    ll x, y;
    cin >> x >> y;
    ll cnt=0;
    // cout << ((x ^ y) & -(x ^ y)) << endl;
    string z=decToBin(x^y);
    for (ll i = z.size()-1; i >=0 ; i--)
    {
        if(z[i]=='1')
        break;
        else
        cnt++;
    }
    cout << (1LL << cnt) << endl; // Using bitwise shift instead of pow()
    
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
