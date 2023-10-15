#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int calculateMinGap(vector<int> &elements, int numColors, int numElements)
{
    vector<vector<int>> colorGaps(numElements + 1);
    vector<int> previousIndex(numElements + 1, 0);

    for (int i = 1; i <= numElements; ++i)
    {
        previousIndex[i] = 0;
        colorGaps[i] = vector<int>();
    }

    for (int i = 1; i <= numElements; ++i)
    {
        colorGaps[elements[i]].push_back(i - previousIndex[elements[i]] - 1);
        previousIndex[elements[i]] = i;
    }

    int minGap = INT_MAX;
    for (int i = 1; i <= numColors; ++i)
    {
        colorGaps[i].push_back(numElements - previousIndex[i]);
        sort(colorGaps[i].rbegin(), colorGaps[i].rend());
        int result = colorGaps[i][0] / 2;
        if (colorGaps[i].size() >= 2)
        {
            result = max(result, colorGaps[i][1]);
        }
        minGap = min(minGap, result);
    }

    return minGap;
}

int main()
{
    int testCases;
    cin >> testCases;
    for (int t = 0; t < testCases; ++t)
    {
        int numElements, numColors;
        cin >> numElements >> numColors;
        vector<int> elements(numElements + 1, 0);
        // int minGap = calculateMinGap(elements, numColors, numElements);
        // cout << minGap << endl;
        // cout << minGap << endl;

        for (int i = 1; i <= numElements; ++i)
        {
            cin >> elements[i];
            // cout << minGap << endl;
        }

        int minGap = calculateMinGap(elements, numColors, numElements);
        cout << minGap << endl;
    }

    return 0;
}
