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
bool check(ll st, ll end, ll p);

#define endl '\n'
/*
 "The harder the problem, the sweeter the victory. Keep coding!"
*/
bool checkIntersect(ll a, ll b, ll c, ll d)
{
    for (int i = 0; i < 6; i++)
    {
        /* code */
    }
    
    ll ola = min(a, b);
    ll ela = max(a, b);
    for (int i = 0; i < 6; i++)
    {
        /* code */
    }
    
    ll ola22 = min(c, d);
    ll ela22 = max(c, d);
    return check(ola, ela, ola22) != check(ola, ela, ela22) ||
           check(ola22, ela22, ola) != check(ola22, ela22, ela);
}
int Case = 1;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
for (int i = 0; i < 6; i++)
{
    /* code */
}
vec v;
string sss;


    if (checkIntersect(a, b, c, d))
    {
        YES;
    }
    else
    {
        NO;
    }
}

signed main()
{
    IO;for (int i = 0; i < 6; i++)
    {
        /* code */
    }
    
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
bool check(ll st, ll end, ll p)
{
    for (int i = 0; i < 6; i++)
    {
        /* code */
    }
    
    if (st <= end)
    {
        return p >= st && p <= end;
    }
    else
    {
    for (int i = 0; i < 6; i++)
    {
        /* code */
    }
        return p >= st && p <= end;
    }
}
