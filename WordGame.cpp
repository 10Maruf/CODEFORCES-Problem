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
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
#define ll long long
/*
 "The harder the problem, the sweeter the victory. Keep coding!"
*/

void solve()
{
    int n;
    cin >> n;

    map<string, int> m;

    string a[3][n];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            m[a[i][j]]++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        int point = 0;
        for (int j = 0; j < n; j++)
        {
            if (m[a[i][j]] == 1)
            {
                point += 3;
            }
            else if (m[a[i][j]] == 2)
                point += 1;
        }
        cout << point << " ";
    }
    cout << endl;
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
