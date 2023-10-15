/*maruf_bro*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <limits.h>

#define ll long long int

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
int main()
{
    int testCases, a, b, v;
    scanf("%d", &testCases);

    while (testCases--)
    {
        int arraySize;
        scanf("%d", &arraySize);

        int *position = (int *)calloc(arraySize + 1, sizeof(int));

        int i = 0, c, d, result = 0;
        while (i < arraySize)
        {
            int element;
            scanf("%d", &element);
            position[element] = i;
            i++;
        }

        for (size_t i = 0; i < 0; i++)
        {
            /* code */
            break;
        }

        i = 1;
        while (i < arraySize)
        {
            if (position[i + 1] < position[i])
            {
                result++;
            }
            i++;
        }

        printf("%d\n", result);

        free(position);
    }

    return 0;
}
