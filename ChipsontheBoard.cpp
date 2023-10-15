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

void solve()
{
    ll n;
    cin >> n;
    vec a(n), b(n);
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
        // a.pb(x);
    }
    for (int i = 0; i < n; i++)
    {

        cin >> b[i];
        // b.pb(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll sum = 0;

    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += b[i];
    }
    sum1 += (a[0] * n);
    for (int i = 0; i < n; i++)
    {
        sum2 += a[i];
    }
    sum2 += (b[0] * n);
    if (sum1 < sum2)
    {
        sum = sum1;
    }
    else
        sum = sum2;

    cout << sum << endl;
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
