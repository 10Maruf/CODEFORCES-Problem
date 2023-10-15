#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int numElements, maxDuplicates, specialNumber;
        scanf("%d%d%d", &numElements, &maxDuplicates, &specialNumber);

        int one = 1;
        int two = 2;
        int three = 3;

        int halfNumElements = numElements / 2;
        int term1 = (numElements - 3) / 2 + 1;
        int term2 = (numElements - 3) / 2;

        if (specialNumber != one)
        {
            puts("YES");
            printf("%d\n", numElements);
            for (int i = 0; i < numElements; i++)
            {
                printf("%d ", one);
            }
            printf("\n");
        }
        else if (numElements == one || maxDuplicates <= one)
        {
            puts("NO");
        }
        else if (numElements % 2 == 0)
        {
            puts("YES");
            printf("%d\n", halfNumElements);
            for (int i = 0; i < halfNumElements; i++)
            {
                printf("%d ", two);
            }
            printf("\n");
        }
        else if (maxDuplicates > two)
        {
            puts("YES");
            printf("%d\n", term1);
            for (int i = 0; i < term2; i++)
            {
                printf("%d ", two);
            }
            printf("%d\n", three);
        }
        else
        {
            puts("NO");
        }
    }

    return 0;
}
