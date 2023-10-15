#include <stdio.h>
#include <limits.h>
int main()
{
    int x, y, r, j, n, a[100], b[100], k, t, max, min, i, temp, c, sum;
    scanf("%d", &t);
    while (t--)
    {
        max = INT_MIN;
        scanf("%d%d", &n, &k);
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (i = 0; i < n; i++)
            scanf("%d", &b[i]);
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
            {
                if (a[i] < a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        for (i = 0; i < k; i++)
        {
            max = INT_MIN;
            for (j = 0; j < n; j++)
            {
                if (b[j] > max)
                {
                    max = b[j];
                    min = j;
                }
            }
            if (b[min] >= a[i])
            {
                temp = a[i];
                a[i] = b[min];
                b[min] = temp;
                c++;
            }
        }

        sum = 0;
        for (i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        printf("%d\n", sum);
    }
    return 0;
}
