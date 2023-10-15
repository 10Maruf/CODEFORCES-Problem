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
        char cards[4];
        cin >> cards;

               if (cards[0] == 'a' || cards[1] == 'b' || cards[2] == 'c')
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}
