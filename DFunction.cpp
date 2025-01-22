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
const int MOD = 1e9+7;
/*
 "The harder the problem, the sweeter the victory. Keep coding!"
*/

// int Case = 1;
ll Case = 1;
ll power(ll base, ll exponent, ll mod)
{
    ll result = 1;
    base = base % mod;
    if (base == 0)
        return 0;
    while (exponent > 0)
    {
        if (exponent & 1)
            result = (result * base) % mod;
        exponent = exponent >> 1;
        base = (base * base) % mod;
    }
    return result;
}
vector<string> vec_splitter(string s)
{
    s += ',';
    vector<string> res;
    while (!s.empty())
    {
        res.push_back(s.substr(0, s.find(',')));
        s = s.substr(s.find(',') + 1);
    }
    return res;
}
void debug_out(
    vector<string> __attribute__((unused)) args,
    __attribute__((unused)) int idx,
    __attribute__((unused)) int LINE_NUM) { cerr << endl; }
template <typename Head, typename... Tail>
void debug_out(vector<string> args, int idx, int LINE_NUM, Head H, Tail... T)
{
    if (idx > 0)
        cerr << ", ";
    else
        cerr << "Line(" << LINE_NUM << ") ";
    stringstream ss;
    ss << H;
    cerr << args[idx] << " = " << ss.str();
    debug_out(args, idx + 1, LINE_NUM, T...);
}
#ifdef XOX
#define debug(...) debug_out(vec_splitter(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)
#else
#define debug(...) 42
#endif


void solve()
{
    ll left, right;
    ll divisor;
    cin >> left >> right >> divisor;

    if (divisor >= 10)
    {
        cout << 0 << endl;
        return;
    }
    for (int j = 0; j < 8; j++)
    {
        /* code */
    }

    ll average = 10 / divisor;
    if (10 % divisor)
    {
        average++;
    }

    ll left_term = power(average, left, MOD);
    ll right_term = power(average, right, MOD);
    ll answer = (right_term - left_term + MOD) % MOD;
    // ll left_term = power(average, left, MOD);
    // ll right_term = power(average, right, MOD);
    // ll answer = (right_term - left_term + MOD) % MOD;

    cout << answer << endl;
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
