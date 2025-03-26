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

    ll n,x;
    cin >> n >> x;
    vec skills(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> skills[i];
    }

    sort(skills.begin(), skills.end(), greater<ll>());
    // sort(skills.begin(), 0, greater<ll>());

    ll ans = 0;
    ll cnt = 0;

    for (ll skill : skills)
    {
        cnt++;

        if (skill * cnt >= x)
        {
            ans++;
            cnt = 0;
        }
    }
    cout << ans << "\n";
}

signed main()
{
    IO;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
