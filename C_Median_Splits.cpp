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
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    int fc = 0;
    int start_sec = 0;
    int found_first = false, found_sec = false;
    for (int i = 0; i < n; i++)
    
        if (a[i] <= k)
        {
            fc++;
            if (fc >= 1)
            {
                found_first = true;
                if (i < n - 1 && a[i + 1] > k)
                {
                    start_sec = i + 2;
                    break;
                }
                start_sec = i + 1;
                break;
            }
            else if (fc == 0)
            {
                found_first = true;
                start_sec = i + 1; break;
            } 
        }
        else fc--;
    }
    fc = 0;
    for (int i = start_sec; i < n; i++)
    {
        if (a[i] <= k)
        {
            fc++;
            if (fc >= 0)
            {
                found_sec = true;
            }
        }
        else fc--;
    }
 
    if (found_first && found_sec)
    {
        cout << "YES\n"; return;
    }
 
    reverse(a.begin(), a.end());
 
    fc = 0;
    start_sec = 0;
    found_first = false;
    found_sec = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= k)
        {
            fc++;
            if (fc >= 1)
            {
                found_first = true;
                if (i < n - 1 && a[i + 1] > k)
                {
                    start_sec = i + 2;
                    break;
                }
                start_sec = i + 1;
                break;
            }
            else if (fc == 0)
            {
                found_first = true;
                start_sec = i + 1; break;
            } 
        }
        else fc--;
    }
    fc = 0;
    for (int i = start_sec; i < n; i++)
    {
        if (a[i] <= k)
        {
            fc++;
            if (fc >= 0)
            {
                found_sec = true;
            }
        }
        else fc--;
    }
 
    if (found_first && found_sec)
    {
        cout << "YES\n"; return;
    }
 
    reverse(a.begin(), a.end());
    fc = 0;
    int ended_first = -1;
    int ended_sec = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= k)
        {
            fc++;
            if (fc >= 0)
            {
                ended_first = i;
                break;
            }
        }
        else fc--;
    }
    fc = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] <= k)
        {
            fc++;
            if (fc >= 0)
            {
                ended_sec = i;
                break;
            }
        }
        else fc--;
    }
    if (ended_first >= 0 && ended_sec <= n - 1 && ended_first < ended_sec) cout << "YES\n";
    else cout << "NO\n";
 
 
 
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
