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
    srand(time(0));

    int n;
    cin >> n;
    if (n < 0)
        return;
    vec v(n);
    for (int i = 0; i < n; i++)
        v[i] = i + 1;
    random_shuffle(v.begin(), v.end());
    int ii = v[0], jj = v[1], kk = v[2];
    cerr << n << endl;
    while (true)
    {
        cout << "? " << ii << " " << jj << " " << kk << endl;
        int id;
        cin >> id;
        if (id < 0)
            return;
        if (id == 0)
            break;
        int sw = rand() % 3 + 1;
        if (sw == 1)
            ii = id;
        else if (sw == 2)
            jj = id;
        else
            kk = id;
    }
    cout << "! " << ii << " " << jj << " " << kk << endl;
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
