/*maruf_bro*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, product = 1;
        cin >> n;
        ll ara[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> ara[i];
        }
        sort(ara, ara + n);
        ara[0] = ara[0] + 1;
        for (int i = 0; i < n; i++)
        {
            /* code */
            product *= ara[i];
        }
        cout << product << endl;
    }
    return 0;
}
