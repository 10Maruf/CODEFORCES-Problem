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

void solve() {
    int n;
    cin >> n;

    vec v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    map<ll, ll> freq;
    vec dup;
    for (int x : v) {
        freq[x]++;
        if (freq[x] == 2) dup.push_back(x);
    }

    if (dup.empty()) {
        cout << "-1\n";
        return;
    }

    if (dup.size() > 1) {
        cout << dup[0] << " " << dup[0] << " " << dup[1] << " " << dup[1] << "\n";
        return;
    }

    int x = dup[0];
    vec not_dup;
    int count = 2;

    for (int i = 0; i < n; i++) {
        if (v[i] == x && count > 0) {
            count--;
        } else {
            not_dup.push_back(v[i]);
        }
    }

    for (int i = 0; i < (int)not_dup.size() - 1; i++) {
        if (2 * x > abs(not_dup[i] - not_dup[i + 1])) {
            cout << x << " " << x << " " << not_dup[i] << " " << not_dup[i + 1] << "\n";
            return;
        }
    }

    cout << "-1\n";
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
