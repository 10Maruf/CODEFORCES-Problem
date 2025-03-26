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

const ll MOD = 998244353;

int Case = 1;

void solve()
{
    ll n, m, d;
    cin >> n >> m >> d;
    vector<string> grid(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> grid[i];
    }

    for (ll r = 0; r < n; ++r)
    {
        bool has_X = false;
        for (ll c = 0; c < m; ++c)
        {
            if (grid[r][c] == 'X')
            {
                has_X = true;
                break;
            }
        }
        if (!has_X)
        {
            cout << 0 << endl;
            return;
        }
    }

    ll dd = (ll)d * d - 1;
    ll dy_max = 0;
    while ((ll)(dy_max + 1) * (dy_max + 1) <= dd && dy_max + 1 < m)
    {
        dy_max++;
    }

    vec dp1(m, 0), dp2(m, 0), dp_sum(m, 0);

    vec prefix_holds(m + 1, 0);
    for (ll c = 0; c < m; ++c)
    {
        prefix_holds[c + 1] = prefix_holds[c] + (grid[n - 1][c] == 'X' ? 1 : 0);
    }
    for (ll c = 0; c < m; ++c)
    {
        if (grid[n - 1][c] == 'X')
        {
            dp1[c] = 1;
            ll left = max(0ll, c - d);
            ll right = min(m - 1, c + d);
            ll sum_temp = prefix_holds[right + 1] - prefix_holds[left];
            dp2[c] = (sum_temp - (grid[n - 1][c] == 'X' ? 1 : 0) + MOD) % MOD;
            dp_sum[c] = (dp1[c] + dp2[c]) % MOD;
        }
    }

    for (ll r = n - 2; r >= 0; --r)
    {

        vec prefix_sum(m + 1, 0);
        for (ll c = 0; c < m; ++c)
        {
            prefix_sum[c + 1] = (prefix_sum[c] + (grid[r + 1][c] == 'X' ? dp_sum[c] : 0)) % MOD;
        }

        vec new_dp1(m, 0);
        for (ll c = 0; c < m; ++c)
        {
            if (grid[r][c] == 'X')
            {
                ll left = max(0ll, c - dy_max);
                ll right = min(m - 1, c + dy_max);
                new_dp1[c] = (prefix_sum[right + 1] - prefix_sum[left] + MOD) % MOD;
            }
        }

        vec prefix_dp1(m + 1, 0);
        for (ll c = 0; c < m; ++c)
        {
            prefix_dp1[c + 1] = (prefix_dp1[c] + (grid[r][c] == 'X' ? new_dp1[c] : 0)) % MOD;
        }

        vec new_dp2(m, 0);
        for (ll c = 0; c < m; ++c)
        {
            if (grid[r][c] == 'X')
            {
                ll left = max(0ll, c - d);
                ll right = min(m - 1, c + d);
                ll sum_temp = (prefix_dp1[right + 1] - prefix_dp1[left] + MOD) % MOD;
                new_dp2[c] = (sum_temp - new_dp1[c] + MOD) % MOD;
                // ll left = max(0ll, c - d);
                // ll right = min(m - 1, c + d);
                // ll sum_temp = (prefix_dp1[right + 1] - prefix_dp1[left] + MOD) % MOD;
                // new_dp2[c] = (sum_temp - new_dp1[c] + MOD) % MOD;
            }
        }

        dp1 = new_dp1;
        dp2 = new_dp2;
        for (ll c = 0; c < m; ++c)
        {
            dp_sum[c] = (dp1[c] + dp2[c]) % MOD;
        }
    }

    ll answer = 0;
    for (ll c = 0; c < m; ++c)
    {
        if (grid[0][c] == 'X')
        {
            answer = (answer + dp_sum[c]) % MOD;
        }
    }
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