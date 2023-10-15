#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int comp(const void *x, const void *y)
{
    return *(int *)x - *(int *)y;
}
int main()
{
    int n, m, sum = 0;
    scanf("%d %d", &n, &m);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), comp);

    for (int i = 0; i < m; i++)
    {

        if (arr[i] < 0)
        {
            sum += (-1 * arr[i]);
        }
    }

    printf("%d", sum);
    return 0;
}
