#include <stdio.h>
#include <string.h>

int main()
{
    int t, n, x, i, j;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 0; i < n; i++)
        {
            scanf("%d", &x);
            char b[x];
            scanf("%s", &b);
            for (j = 0; j < x; j++)
            {
                if (b[j] == 'U')
                {
                    a[i]--;
                    if (a[i] == -1)
                    {
                        a[i] = 9;
                    }
                }
                else
                {
                    a[i]++;
                    if (a[i] == 10)
                    {
                        a[i] = 0;
                    }
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
            if (i == n - 1)
            {
                printf("\n");
            }
        }
    }

    return 0;
}
