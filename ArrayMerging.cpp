#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
    cin >> n;
    vector<int> xx(n);
    vector<int> yy(n);
    for (int i = 0; i < n; i++)
    {
        cin >> xx[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> yy[i];
    }
    unordered_map<int, int> a;
    unordered_map<int, int> b;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            a[xx[i - 1]] = max(count, a[xx[i - 1]]);
            break;
        }
        if (xx[i] == xx[i - 1])
        {
            count++;
        }
        else
        {
            a[xx[i - 1]] = max(count, a[xx[i - 1]]);
            count = 1;
        }
    }

    count = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            b[yy[i - 1]] = max(count, b[yy[i - 1]]);
            break;
        }
        if (yy[i] == yy[i - 1])
        {
            count++;
        }
        else
        {
            b[yy[i - 1]] = max(count, b[yy[i - 1]]);
            count = 1;
        }
    }

    int ans = 0;
    for (int e : xx)
    {
        ans = max(ans, a[e] + b[e]);
    }
    for (int e : yy)
    {
        ans = max(ans, b[e] + a[e]);
    }
    cout << ans << endl;
    }
    return 0;
}