#include <stdio.h>

int main()
{
    int n, m, i, j, count = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m);
        int a[m];
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[j]);
        }
        for (j = 0; j < m - 1; j++)
        {
            if (a[j] == a[j + 1])
                count++;
            if (a[j] != a[j + 1])
                break;
        }
        if (a[j + 1] == a[j + 2])
            printf("%d\n", count + 1);
        else
            printf("%d\n", count + 2);
        count = 0;
    }
    return 0;
}