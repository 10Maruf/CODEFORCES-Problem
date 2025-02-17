/*maruf_bro*/

#include <bits/stdc++.h>
using namespace std;

/*------------- Fast I/O -------------*/
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

/*------------- Type Aliases -------------*/
#define ll long long
#define ld long double
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vec vector<ll>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(x) (ll)(x).size()

/*------------- Loops -------------*/
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define per(i, a, b) for (ll i = a; i >= b; i--)
#define fcin(n)       \
    for (auto &x : n) \
    cin >> x
#define fcout(n)     \
    for (auto x : n) \
    cout << x << " "

/*------------- Constants -------------*/
const ll INF = 1e18;
const int MOD = 1e9 + 7;
const ld EPS = 1e-9;
const ld PI = acos(-1.0);

/*------------- Math Functions -------------*/
inline ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
inline ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll modPow(ll base, ll exp, ll mod = MOD)
{
    ll res = 1;
    while (exp)
    {
        if (exp % 2)
            res = res * base % mod;
        base = base * base % mod;
        exp /= 2;
    }
    return res;
}
ll modInv(ll a, ll mod = MOD) { return modPow(a, mod - 2, mod); }

/*------------- Bit Manipulation -------------*/
#define isSet(n, i) ((n >> i) & 1)
#define setBit(n, i) (n | (1LL << i))
#define unsetBit(n, i) (n & ~(1LL << i))
#define toggleBit(n, i) (n ^ (1LL << i))
#define countBits(x) __builtin_popcountll(x)
#define log2_floor(x) (63 - __builtin_clzll(x))

/*------------- Graph Utilities -------------*/
vector<vector<int>> adj;
vector<bool> visited;
void bfs(int start)
{
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (int v : adj[node])
        {
            if (!visited[v])
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}
void dfs(int node)
{
    visited[node] = true;
    for (int v : adj[node])
    {
        if (!visited[v])
            dfs(v);
    }
}

/*------------- Debugging Macros -------------*/
#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << endl;
#define debugArr(arr)     \
    for (auto x : arr)    \
        cerr << x << " "; \
    cerr << endl;
#else
#define debug(x)
#define debugArr(arr)
#endif

/*------------- Other Utilities -------------*/
#define YES puts("YES")
#define NO puts("NO")
#define endl '\n'
#define CaseNumber printf("Case %d: ", Case++)

int Case = 1;
void solve()
{
    int n, m;
    cin >> n >> m;

    vec v(n), v1(n);
    ll temp1 = 0;

    for (int i = 0; i < n; i++)
    {
        ll sum = 0, v1_i = 0;
        for (int j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            v[i] += x;
            sum += x;
            v1_i += sum;
        }
        v1[i] = v1_i;
        temp1 += v1_i;
    }

    vec v2(n);
    iota(v2.begin(), v2.end(), 0);
    sort(v2.begin(), v2.end(), [&](int a, int b)
         { return v[a] > v[b]; });

    ll temp2 = 0;
    for (int r = 0; r < n; r++)
    {
        temp2 += (ll)(n - 1 - r) * v[v2[r]];
    }
    // if (n == 0) {
    //     if (k == m)
    //         cout << string(m, '1') << "\n";
    //     else
    //         cout << -1 << "\n";
    //     continue;
    // }
    // if (m == 0) {
    //     if (k == n)
    //         cout << string(n, '0') << "\n";
    //     else
    //         cout << -1 << "\n";
    //     continue;
    // }
    cout << temp1 + m * temp2 << endl;
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
