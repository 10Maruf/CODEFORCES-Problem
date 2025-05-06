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
   
    vector<string> a(8);
    for(int i = 0;i < 8; ++i)
        cin >> a[i];
    bool f = false;
    for(int i = 0;i < 8; ++i){
        if(count(a[i].begin(), a[i].end(), 'R') == 8){
            cout << 'R' << endl;
            f = true;
            break;
        }
    }
    if(!f) cout << 'B' << endl;
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
