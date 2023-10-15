#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int t;
        scanf("%d", &t);
        int min1, min2, i, max;
        int a[50], b[50];
        long long d = 0;
        min1 = min2 = 1000000001;
        for (i = 0; i < t; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] < min1)
                min1 = a[i];
        }
        for (i = 0; i < t; i++)
        {
            scanf("%d", &b[i]);
            if (b[i] < min2)
                min2 = b[i];
        }
        for (i = 0; i < t; i++)
        {
            int j, k;
            j = a[i] - min1;
            k = b[i] - min2;
            if (j > k)
                max = j;
            else
                max = k;
            d += max;
        }
        printf("%lld\n", d);
    }

    return 0;
}
