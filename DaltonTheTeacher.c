#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int numTestCases, count = 0, m, n;
    scanf("%d", &numTestCases);

    while (numTestCases--)
    {
        int numElements;
        scanf("%d", &numElements);

        for (int i = 0; i < numElements; i++)
        {
            int num;
            scanf("%d", &num);
            if (num == i + 1)
            {
                count++;
            }
        }

        printf("%d\n", (count + 1) / 2);
        count = 0;
    }
    return 0;
}
