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
   int n;
		cin >> n;
		 
		vector<int> a(n+1);
		
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		
		
		sort(a.begin() +1 , a.end());
		
		int j = (n+1)/2;
		int i = j;
		int ans = 0;
		
		while(a[i] == a[j] and i <= n){
			ans++;
			i++;
		}
		
		cout << ans << endl;
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
