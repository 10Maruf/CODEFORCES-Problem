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

vector<tuple<int, int, int>> find_factors(long long k)
{
    vector<tuple<int, int, int>> factors;
    for (int a = 1; a <= cbrt(k); ++a)
    {
        if (k % a == 0)
        {
            long long ka = k / a;
            for (int b = 1; b <= sqrt(ka); ++b)
            {
                if (ka % b == 0)
                {
                    int c = ka / b;
                    factors.emplace_back(a, b, c);
                    factors.emplace_back(a, c, b);
                    factors.emplace_back(b, a, c);
                    factors.emplace_back(b, c, a);
                    factors.emplace_back(c, a, b);
                    factors.emplace_back(c, b, a);
                }
            }
        }
    }
    return factors;
}

int max_distinct_locations(int x, int y, int z, long long k)
{
    vector<tuple<int, int, int>> factors = find_factors(k);
    int max_positions = 0;

    for (const auto &factor : factors)
    {
        int a = get<0>(factor);
        int b = get<1>(factor);
        int c = get<2>(factor);

        if (a <= x && b <= y && c <= z)
        {
            int positions = (x - a + 1) * (y - b + 1) * (z - c + 1);
            max_positions = max(max_positions, positions);
        }
    }

    return max_positions;
}

void solve()
{
    int x, y, z;
    long long k;
    cin >> x >> y >> z >> k;
    cout << max_distinct_locations(x, y, z, k) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        solve();
    }

    return 0;
}
