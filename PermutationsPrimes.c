#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    long long numTestCases;
    scanf("%lld", &numTestCases);

    while (numTestCases--)
    {
        long long size;
        scanf("%lld", &size);

        long long *arr = (long long *)malloc(size * sizeof(long long));
        arr[0] = 2;
        arr[size - 1] = 3;
        arr[size / 2] = 1;

        long long flag = 4;
        for (int i = 1; i < size - 1; i++)
        {
            if (i == size / 2)
                continue;
            arr[i] = flag++;
        }

        for (int i = 0; i < size; i++)
        {
            printf("%lld ", arr[i]);
        }
        putchar('\n');

        free(arr);
    }

    return 0;
    return 0;
}
