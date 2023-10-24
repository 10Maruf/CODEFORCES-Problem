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
    string s;
    cin>>s;
    int ab_c = 0, ba_c = 0;
    string ab = "ab", ba = "ba";
    int pos = 0;
    while ((pos = s.find(ab, pos)) != string::npos)
    {

        ab_c++;
        pos += ab.length();
    }
    pos = 0;
    while ((pos = s.find(ba, pos)) != string::npos)
    {

        ba_c++;
        pos += ba.length();
    }
    if (ab_c == ba_c)
    {
        cout << s << endl;
    }
     else
        {
            for (int i = 0; i < s.size(); i++)
            {
                int ab_c = 0, ba_c = 0;
                if (s[i] == 'a')
                {
                    s[i] = 'b';
                }
                else
                {
                    s[i] = 'a';
                }
                for (int j = 0; j < s.size() - 1; j++)
                {
                    if (s[j] == 'a' and s[j + 1] == 'b')
                    {
                        ab_c++;
                        j++;
                    }
                }
                for (int j = 0; j < s.size() - 1; j++)
                {
                    if (s[j] == 'b' and s[j + 1] == 'a')
                    {
                        ba_c++;
                        j++;
                    }
                }
                if (ab_c == ba_c)
                {
                    cout << s << endl;
                    break;
                }
                else
                {
                    if (s[i] == 'a')
                    {
                        s[i] = 'b';
                    }
                    else
                    {
                        s[i] = 'a';
                    }
                }
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
