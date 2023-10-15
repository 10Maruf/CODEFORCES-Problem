#include <stdio.h>
int main()
{
    int m, k;
    scanf("%d", &m);
    for (k = 0; k < m; k++)
    {
        int n, i, j, temp;
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        int min = a[1] - a[0];
        for (i = 0; i < n - 1; i++)
        {
            if (min > (a[i + 1] - a[i]))
            {
                min = a[i + 1] - a[i];
            }
        }
        printf("%d\n", min);
    }
    return 0;
}
