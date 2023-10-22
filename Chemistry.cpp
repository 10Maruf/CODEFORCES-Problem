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
#define ll long long
/*
 "The harder the problem, the sweeter the victory. Keep coding!"
*/

int Case = 1;

vector<int> countCharacterOccurrences(const string &str)
{
    vector<int> charCount(26, 0);
    for (char c : str)
    {
        charCount[c - 'a']++;
    }
    return charCount;
}

void solve()
{
    ll N, K;
    ll ex = 0;
    cin >> N;
    cin >> K;
    string S;
    cin >> S;
    map<int, int> m;
    set<int> l;
    if (N < K)
    {
        NO;
        return;
    }

    vector<int> charCount = countCharacterOccurrences(S);

    for (int i = 0; i < 26; i++)
    {
        ex += (charCount[i] % 2);
    }
    ex--;

    if (K < ex)
    {
        NO;
        return;
    }
    YES;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
