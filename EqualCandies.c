#include <stdio.h>
int main()
{
    int t, i, j;
    scanf("%d", &t);
    while (t--)
    {
        int n, temp, sum = 0, min = 10000000;
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] < min)
                min = a[i];
        }
        for (i = 0; i < n; i++)
        {
            a[i] = a[i] - min;
            sum = sum + a[i];
        }
        printf("%d\n", sum);
    }
    return 0;
}
