#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<long long> a(n);
        vector<pair<long long, int>> v;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            v.push_back({a[i], i});
        }

        sort(v.begin(), v.end());

        vector<long long> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(b.begin(), b.end());

        vector<long long> c(n);
        for (int i = 0; i < n; i++)
        {
            c[v[i].second] = b[i];
        }

        for (int i = 0; i < n; i++)
        {
            cout << c[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
