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
    string b;
    cin >> b;
       
        char prev = '0';
        int swaps = 0;
        long long ans = 0;
        for (int i = 0; i < n; i++) {
          if (b[i] != prev) {
            prev = b[i];
            swaps++;
            ans++;
          }
          ans++;
        }
        if (swaps > 1) {
          if (swaps == 2) ans -= 1;
          else ans -= 2;
        }
       
        cout << ans << '\n';
       
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
