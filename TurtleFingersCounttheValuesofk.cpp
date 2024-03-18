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
vec divisors(ll n)
{
    vec v;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                v.pb(i);
            }
            else
            {
                v.pb(i);
                v.pb(n / i);
            }
        }
    }
    return v;
}
void solve()
{
    ll a, b, l, comp, cnt = 0;
    cin >> a >> b >> l;
    vec k = divisors(l);
    vec x, y;
    for (ll i = 0; i <= 20; i++)
    {
        comp = pow(a, i);
        if (comp <= 1e6)
        {
            x.pb(comp);
        }
        else
            break;
    }
    for (ll i = 0; i <= 20; i++)
    {
        comp = pow(b, i);
        if (comp <= 1e6)
        {
            y.pb(comp);
        }
        else
            break;
    }
    for (ll i = 0; i < (ll)k.size(); i++)
    {
        ll flag = 0;
        for (ll j = 0; j < (ll)x.size(); j++)
        {
            for (ll m = 0; m < (ll)y.size(); m++)
            {
                if (k[i] * x[j] * y[m] == l)
                {
                    cnt++;
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                break;
        }
    }

    cout << cnt << endl;

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
