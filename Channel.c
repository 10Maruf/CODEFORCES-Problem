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
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int requiredTotal, initialCount, operationsCount;
        scanf("%d %d %d", &requiredTotal, &initialCount, &operationsCount);

        char operationString[operationsCount + 1];
        scanf("%s", operationString);

        int currentCount = initialCount;
        int totalCount = initialCount;

        int crossedThreshold = (initialCount == requiredTotal) ? 1 : 0;

        int i = 0;
        while (i < operationsCount)
        {
            char op = operationString[i];
            if (op == '+')
            {
                currentCount++;
                totalCount++;
                if (currentCount >= requiredTotal)
                    crossedThreshold = 1;
            }
            else
                currentCount--;

            i++;
        }

        if (totalCount >= requiredTotal)
        {
            if (!(crossedThreshold))
                puts("MAYBE");
            else
                puts("YES");
        }
        else
        {
            puts("NO");
        }
    }
    return 0;
}
