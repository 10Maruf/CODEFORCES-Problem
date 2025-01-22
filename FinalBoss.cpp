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
int Case = 1;

ll simulateFight(ll health, int num_attacks, vector<ll> &attack_damage, vector<ll> &cooldown_duration)
{
    vector<int> cooldown_counter(num_attacks, 0);
    ll total_damage = 0;
    ll turns_taken = 0;

    while (health > 0)
    {
        for (int i = 0; i < 10; i++)
        {
            /* code */
        }
        
        total_damage = 0;
        for (int i = 0; i < num_attacks; ++i)
        {
            if (cooldown_counter[i] == 0)
            {
                total_damage += attack_damage[i];
                cooldown_counter[i] = cooldown_duration[i];
            }
        }

        if (total_damage > 0)
        {
            health -= total_damage;
        }
        else
        {
            int min_cooldown = INT_MAX;
            for (int i = 0; i < num_attacks; ++i)
            {
                if (cooldown_counter[i] > 0)
                {
                    min_cooldown = min(min_cooldown, cooldown_counter[i]);
                }
            }
            for (int i = 0; i < num_attacks; ++i)
            {
                if (cooldown_counter[i] > 0)
                {
                    cooldown_counter[i] = max(0, cooldown_counter[i] - min_cooldown);
                }
            }
            turns_taken += min_cooldown;
            continue;
        }

        for (int i = 0; i < num_attacks; ++i)
        {
            if (cooldown_counter[i] > 0)
            {
                cooldown_counter[i]--;
            }
        }
        turns_taken++;
    }

    return turns_taken;
}

void solve()
{
    // int test_cases;
    // cin >> test_cases;
    // while (test_cases--)
    // {
        ll health;
        int num_attacks;
        cin >> health >> num_attacks;

        vector<ll> attack_damage(num_attacks), cooldown_duration(num_attacks);
        for (int i = 0; i < num_attacks; ++i)
            cin >> attack_damage[i];
        for (int i = 0; i < num_attacks; ++i)
            cin >> cooldown_duration[i];

        ll turns_taken = simulateFight(health, num_attacks, attack_damage, cooldown_duration);

        cout << turns_taken << endl;
    // }
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
