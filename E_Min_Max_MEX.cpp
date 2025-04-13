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

bool chk(const vector<ll>& a, ll m, ll k) {
    vector<bool> vis(m, false);
    ll count = 0;
    ll found = 0;
 
    for (ll num : a) {
        if (num < m && !vis[num]) {
            vis[num] = true;
            found++;
        }
 
        if (found == m) {
            count++;
            found = 0;
            fill(vis.begin(), vis.end(), false);
        }
    }
 
    return count >= k;
}
 
 
void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i=0; i<n; i++) {
        cin >> a[i];
    }
 
    ll st=0, end=n, ans = 0; 
    while(st <= end) {
        ll mid = (st+end)/2;
 
        if(chk(a,mid,k)) {
            ans = mid;
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
 
    cout << ans<< endl;
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
