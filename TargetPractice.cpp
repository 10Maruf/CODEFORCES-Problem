/*maruf_bro*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
     ll t;
    cin >> t;
    while (t--)
    {
        ll total_distance = 0;
        char cell;

        for (ll i = 1; i <= 10; i++)
        {
            for (ll j = 1; j <= 10; j++)
            {
                cin >> cell;
                if (cell == 'X')
                {
                    ll min_distance = min({i, 11 - i, j, 11 - j});
                    total_distance += min_distance;
                }
            }
        }

        cout << total_distance << endl;
    }
    return 0;
}
