#include <iostream>
#include <vector>
#include <set>
#include <utility>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> count(k + 1, 0);

        set<pair<int, int>> S;
        for (int color = 1; color <= k; color++)
        {
            S.insert({0, color});
        }

        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                int forbidden1 = (i > 0 ? grid[i - 1][j] : 0);
                int forbidden2 = (j > 0 ? grid[i][j - 1] : 0);

                auto it = S.begin();
                while (it != S.end())
                {
                    int cnt = it->first;
                    int color = it->second;
                    if (color != forbidden1 && color != forbidden2)
                    {

                        grid[i][j] = color;
                        count[color]++;
                        it = S.erase(it);
                        S.insert({count[color], color});
                        break;
                    }
                    ++it;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << grid[i][j];
                if (j < m - 1)
                    cout << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}