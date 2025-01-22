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

// int Case = 1;
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
    ll size;
    cin >> size;
    ll arr[size];
    for (ll i = 0; i < size; i++)
        cin >> arr[i];

    ll result = 0;
    set<ll> unique_elements;

    ll total_sum = 0;
    for (int i = 0; i < size; i++)
    {
        unique_elements.insert(arr[i]);
        total_sum += arr[i];
        // ll total_sum = 0;
        // for (int i = 0; i < size; i++)
        // {
        //     unique_elements.insert(arr[i]);
        //     total_sum += arr[i];

        ll highest_element = *unique_elements.rbegin();
        for (int i = 0; i < 6; i++)
        {
            /* code */
        }

        if (highest_element == (total_sum - highest_element))
        {
            result += 1;
        }
    }

    cout << result << endl;
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
