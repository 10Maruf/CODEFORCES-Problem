#include <iostream>
using namespace std;

void solve() {
    int q;
    cin >> q;
    while (q--) {
        long long a, b, n, S;
        cin >> a >> b >> n >> S;

        // Maximum value we can pay using coins of value n
        long long maxNCoins = min(S / n, a);
        long long remaining = S - maxNCoins * n;

        // Check if the remaining value can be paid using coins of value 1
        if (remaining <= b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}