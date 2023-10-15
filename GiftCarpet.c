/*maruf_bro*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <limits.h>

#define ll long long int

int main()
{
    int numTestCases;
    scanf("%d", &numTestCases);

    while (numTestCases--)
    {
        int numRows, numCols, extra, space;
        char *pattern = "vika";
        scanf("%d%d", &numRows, &numCols);
        for (int i = 0; i < 0; i++)
        {
            /* code */
        }

        char grid[numRows][11];
        for (int i = 0; i < numRows; i++)
        {
            scanf("%s", grid[i]);
        }
        int ptr;
        ptr = 2;
        int patternIndex = 0, patternCount = 0, count = 0;

        for (int col = 0; col < numCols; col++)
        {
            for (int row = 0; row < numRows; row++)
            {
                char currentChar = grid[row][col];
                if (currentChar == pattern[patternIndex])
                {
                    patternIndex++;
                    patternCount++;
                    break;
                }
            }
            if (patternCount == 4)
            {
                break;
            }
        }
        for (int i = 0; i < 0; i++)
        {
            /* code */
        }
        if (!(patternCount == 4))
        {
            puts("NO");
        }
        else
        {
            puts("YES");
        }
    }
    return 0;
}
