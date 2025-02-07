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

int Case = 1;

void solve()
{
    int n;
    cin >> n;
    vec a(n), b(n);
    fcin(a);
    fcin(b);
    
    set<ll> setA(a.begin(), a.end());
    set<ll> setB(b.begin(), b.end());
    int dA = setA.size(), dB = setB.size();
    
    if(dB >= 3){
        YES;
        return;
    }
    
    if(dB == 1){
        if(dA >= 3) YES;
        else NO;
        return;
    }
    
    if(dA == 1) {
        NO;
        return;
    }
    
    YES;
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
