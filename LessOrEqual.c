#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int n, k, x;
    scanf("%d %d", &n, &k);
    int a[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int size = sizeof(a) / sizeof(a[0]);
    qsort(a, size, sizeof(int), cmp);

    if (k != 0)
    {
        if (a[k - 1] == a[k])
        {
            x = -1;
        }
        else
        {
            x = a[k - 1];
        }
    }
    else
    {
        if (a[0] == 1)
        {
            x = -1;
        }
        else
        {
            x = a[0] - 1;
        }
    }

    printf("%d", x);

    return 0;
}