#include <iostream>
#include <vector>
#include <set>
#include <utility> // for std::pair

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    for (int test = 0; test < t; test++) {
        int n, m, k;
        cin >> n >> m >> k;

        // Initialize count of each integer's usage (1 to k)
        vector<int> count(k + 1, 0);

        // Set to keep integers ordered by usage count
        set<pair<int, int>> S; // (count, color)
        for (int color = 1; color <= k; color++) {
            S.insert({0, color});
        }

        // Initialize the grid
        vector<vector<int>> grid(n, vector<int>(m));

        // Fill the grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                // Get forbidden integers from left and upper neighbors
                int forbidden1 = (i > 0 ? grid[i - 1][j] : 0); // Upper neighbor
                int forbidden2 = (j > 0 ? grid[i][j - 1] : 0); // Left neighbor

                // Find the first available integer from the set
                auto it = S.begin();
                while (it != S.end()) {
                    int cnt = it->first;
                    int color = it->second;
                    if (color != forbidden1 && color != forbidden2) {
                        // Assign this integer to the cell
                        grid[i][j] = color;
                        count[color]++;
                        it = S.erase(it); // Remove old entry
                        S.insert({count[color], color}); // Insert with updated count
                        break;
                    }
                    ++it;
                }
            }
        }

        // Output the grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << grid[i][j];
                if (j < m - 1) cout << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}