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

vector<bool> prime(10000001, true);
void sieveOfEratosthenes(int n)
{
    prime[0] = prime[1] = false;
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p])
        {
            for (int i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    vector<int> m(n + 1);
    int k = 0;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == true)
        {
            k++;
        }
        m[i] = k;
    }
    for (int i = 2; i <= n; i++)
    {
        int y = n / i;
        ans += m[y];
    }
    cout << ans + m[n] << endl;
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
