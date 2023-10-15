#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int t, n, i, j, k;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int a[n];
        int sum = 0;
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
            sum += a[j];
        }
        if (sum % n == 0)
        {
            printf("%d\n", sum / n);
        }
        else
        {
            printf("%d\n", (sum / n) + 1);
        }
    }
    return 0;
}
