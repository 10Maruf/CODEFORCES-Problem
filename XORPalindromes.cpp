#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> ans(n + 1);
    int cnt = 0, perfect0 = 0, perfect1 = 0;
    int i = 0;
    int j = n - 1;

    while (i < j) {
        if (s[i] != s[j]) 
            cnt++;
            if ((s[i] == s[j]) && (s[i] == '0')) {
                perfect0++;
            } else if ((s[i] == s[j]) && (s[i] == '1')) {
                perfect1++;
            }
            i++;
            j--;
        
    }

    if (cnt == 0) {
        ans[0] = 1;
        int v = 0;
        if (n & 1) {
            v = 1;
            for (int i = 1; i <= n; i++) {
                if (cnt > i) {
                    continue;
                }
                int y = i - cnt;
                if ((y > (perfect0 * 2) + perfect1 * 2) + v) {
                    continue;
                }
                if (y & 1) {
                    if (n % 2 == 0) {
                        continue;
                    } else
                        ans[i] = 1;
                } else
                    ans[i] = 1;
            }
            string p;
            for (int i = 0; i <= n; i++) {
                p.push_back(ans[i] + '0');
            }
            cout << p << endl;
        }
    }
    }
    

    return 0;
}