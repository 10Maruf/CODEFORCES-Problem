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
    int n, k;
    int count = 0;
    cin >> n >> k;
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
        if (ara[i] == k)
            count++;
    }

    if (count > 0)
        YES;
    else
        NO;
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
