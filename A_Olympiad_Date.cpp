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
    vector<int> digits(n);
    for (int i = 0; i < n; i++)
    {
        cin >> digits[i];
    }

    int required[10] = {3, 1, 2, 1, 0, 1, 0, 0, 0, 0};
    int count[10] = {0};
    int answer = 0;

    for (int i = 0; i < n; i++)
    {
        count[digits[i]]++;
        bool canForm = true;
        for (int d = 0; d < 10; d++)
        {
            if (count[d] < required[d])
            {
                canForm = false;
                break;
            }
        }
        if (canForm)
        {
            answer = i + 1;
            break;
        }
    }
    cout << answer << "\n";
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
