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

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n - 2);
    for (int i = 0; i < n - 2; i++)
    {
        cin >> arr[i];
    }
    if (n < 5)
    {
        YES;
        return;
    }
    else
    {
        bool flag = true;
        for (int i = 0; i < n - 4; i++)
        {
            if (arr[i] == 1 && arr[i + 1] == 0 && arr[i + 2] == 1)
            {
                flag = false;
            }
        }
        if (flag)
        {
            YES;
            return;
        }
        else
        {
            NO;
            return;
        }
    }
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
