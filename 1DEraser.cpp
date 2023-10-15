/*maruf_bro*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string sequence;
        ll length, jumpSize, qa, sss;
        cin >> length;
        cin >> jumpSize;
        cin >> sequence;
        ll count = 0;
        ll i = 0; // Initialize the loop variable i
        while (i < length)
        {
            if (sequence[i] == 'B')
            {
                count++;
                i += jumpSize - 1;
            }
            i++; // Increment i inside the loop
        }
        cout << count << endl;
    }
    return 0;
}
