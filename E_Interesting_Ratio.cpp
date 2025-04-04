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

vector<bool> sieve(int n)
{
    vector<bool> prime(n, 1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i < n; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j < n; j += i)
                prime[j] = 0;
        }
    }

    return prime;
}
void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    vector<bool> prime = sieve(n + 1);
    // for(auto it : prime) cout<<it<<" ";

    for (int i = 0; i < n + 1; i++)
    {
        if (prime[i])
        {
            ans += n / i;
        }
    }
    cout << ans << endl;
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
