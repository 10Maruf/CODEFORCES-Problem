/*maruf_bro*/

#include <bits/stdc++.h>
using namespace std;
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ld long double
#define ll long long
#define vec vector<ll>
#define pb push_back
#define fcin(n)       \
    for (auto &x : n) \
    cin >> x
#define fcout(n)     \
    for (auto x : n) \
    cout << x << " "
#define YES puts("YES")
#define NO puts("NO")
#define endl '\n'
/*
 "The harder the problem, the sweeter the victory. Keep coding!"
*/

int Case = 1;

void solve()
{
    string inputStr;
    cin >> inputStr;

    vector<tuple<char, int>> upperStack, lowerStack;
    queue<int> q;


    for (int i = 0; i < inputStr.size(); i++)
    {
        if (inputStr[i] == toupper(inputStr[i]))
        {
            if (inputStr[i] == 'B' && !lowerStack.empty())
                lowerStack.pop_back();
            else if (inputStr[i] != 'B')
                lowerStack.push_back({inputStr[i], i});
        }
        else
        {
            if (inputStr[i] == 'b' && !upperStack.empty())
                upperStack.pop_back();
    // for (int i = 0; i < inputStr.size(); i++)
    // {
    //     if (inputStr[i] == toupper(inputStr[i]))
    //     {
    //         if (inputStr[i] == 'B' && !lowerStack.empty())
    //             lowerStack.pop_back();
    //         else if (inputStr[i] != 'B')
    //             lowerStack.push_back({inputStr[i], i});
            else if (inputStr[i] != 'b')
                upperStack.push_back({inputStr[i], i});
        }
    }
    //     }
    //     else
    //     {
    //         if (inputStr[i] == 'b' && !upperStack.empty())
    //             upperStack.pop_back();
    //         else if (inputStr[i] != 'b')
    //             upperStack.push_back({inputStr[i], i});
    //     }
    // }

    int upperIndex = 0, lowerIndex = 0;

    while (upperIndex < upperStack.size() || lowerIndex < lowerStack.size())
    {
        int indexU, indexL;
        char charU, charL;

        if (upperIndex == upperStack.size())
        {
            auto element = lowerStack[lowerIndex];
            tie(charU, indexU) = element;
            cout << charU;
            lowerIndex++;
            continue;
        }

        if (lowerIndex == lowerStack.size())
        {
            auto element = upperStack[upperIndex];
            // auto element = upperStack[upperIndex];
            // auto element = upperStack[upperIndex];
            // auto element = upperStack[upperIndex];
            // auto element = upperStack[upperIndex];
            tie(charU, indexU) = element;
            cout << charU;
            upperIndex++;
            continue;
        }

        auto elementU = upperStack[upperIndex];
        auto elementL = lowerStack[lowerIndex];
        // auto elementU = upperStack[upperIndex];
        // auto elementL = lowerStack[lowerIndex];
        // auto elementL = lowerStack[lowerIndex];
        // auto elementL = lowerStack[lowerIndex];
        // auto elementL = lowerStack[lowerIndex];
        tie(charU, indexU) = elementU;
        tie(charL, indexL) = elementL;
        // tie(charU, indexU) = elementU;
        // tie(charL, indexL) = elementL;

        if (indexU < indexL)
        {
            cout << charU;
            upperIndex++;
        }
        else
        {
            cout << charL;
            lowerIndex++;
        }
    }

    cout << endl;
}

signed main()
{
    IO;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
