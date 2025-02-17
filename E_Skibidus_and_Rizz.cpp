#include <bits/stdc++.h>
using namespace std;

bool feasibleUp(int cur, int ru, int rd, int U, int F) {
    return ru > 0 && abs((cur + 1) - F) <= U;
}

bool feasibleDown(int cur, int ru, int rd, int L, int F) {
    return rd > 0 && abs((cur - 1) - F) <= L;
}

string constructNonNegative(int F, int k, int n, int m) {
    int cur = 0, ru = n, rd = m;
    string res(n + m, ' ');
    int pos = 0;

    for (int i = 0; i < n + m; i++) {
        if (ru > 0 && cur + 1 <= k) {
            res[pos++] = '0';
            cur++;
            ru--;
        } else if (rd > 0 && cur - 1 >= -k) {
            res[pos++] = '1';
            cur--;
            rd--;
        } else {
            return "";
        }
    }
    return (cur == F) ? res : "";
}

string constructNegative(int F, int k, int n, int m) {
    int cur = 0, ru = n, rd = m;
    string res(n + m, ' ');
    int pos = 0;

    for (int i = 0; i < n + m; i++) {
        bool upOk = feasibleUp(cur, ru, rd, k, F);
        bool downOk = feasibleDown(cur, ru, rd, k, F);
        if (upOk && downOk) {
            if (abs((cur + 1) - F) <= abs((cur - 1) - F)) {
                res[pos++] = '0';
                cur++;
                ru--;
            } else {
                res[pos++] = '1';
                cur--;
                rd--;
            }
        } else if (upOk) {
            res[pos++] = '0';
            cur++;
            ru--;
        } else if (downOk) {
            res[pos++] = '1';
            cur--;
            rd--;
        } else {
            return "";
        }
    }
    return (cur == F) ? res : "";
}

// Main function
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        int total = n + m;

        // Special handling for pure cases.
        if (n == 0) {
            if (k == m)
                cout << string(m, '1') << "\n";
            else
                cout << -1 << "\n";
            continue;
        }
        if (m == 0) {
            if (k == n)
                cout << string(n, '0') << "\n";
            else
                cout << -1 << "\n";
            continue;
        }

        // F is the final difference = n - m.
        int F = n - m;
        if (abs(F) > k) {
            cout << -1 << "\n";
            continue;
        }

        string ans;
        if (F >= 0) {
            if (n < k) {
                cout << -1 << "\n";
                continue;
            }
            ans = constructNonNegative(F, k, n, m);
        } else {
            if (m < k) {
                cout << -1 << "\n";
                continue;
            }
            ans = constructNegative(F, k, n, m);
        }

        if (ans.empty() || (int)ans.size() != total)
            cout << -1 << "\n";
        else
            cout << ans << "\n";
    }
    return 0;
}
