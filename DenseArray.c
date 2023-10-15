#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t, max1, min1, a[51];
    scanf("%d", &t);

    while (t--)
    {
        int n, sum = 0, j;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < n - 1; i++)
        {
            max1 = fmax(a[i], a[i + 1]);
            min1 = fmin(a[i], a[i + 1]);
            if ((float)max1 / min1 > 2)
            {
                j = max1 % 2 != 0 ? max1 / 2 + 1 : max1 / 2;
                while (j > min1)
                {
                    j = j % 2 != 0 ? j / 2 + 1 : j / 2;
                    sum++;
                }
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
