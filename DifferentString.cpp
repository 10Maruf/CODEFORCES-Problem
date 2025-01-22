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
    string str;
    cin >> str;
    vector<int> freq(26, 0); // 26 letters in the alphabet
    for (auto ch : str)
    {
        freq[ch - 'a'] += 1; // assuming lowercase English letters
    }
    int mx = 0;
    for (auto cnt : freq)
    {
        mx = max(mx, cnt);
    }
    if (mx == str.size())
    {
        NO;
        return;
    }
    string ans = "";
    vector<int> visited(str.size(), 0);

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != str[0])
        {
            swap(str[i], str[0]);
            break;
        }
    }
    YES;
    cout << str << endl;
}


signed main()
{
    // IO;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
