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
bool isprime(int n)
{
    if (n <= 1)
        return false;
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

void solve()
{

    ll n, k;
    cin >> n >> k;
    if (k > 1 && n > 1)
    {
        NO;
    }
    else if (k == 1)
    {
        if (isprime(n))
        {
            YES;
        }
        else
            NO;
    }
    else
    {
        if (k == 2)
        {
            YES;
        }
        else
            NO;
    }
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
