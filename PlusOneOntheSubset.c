#include <stdio.h>
int main()
{
    int n, max, min, t;
    scanf("%d", &t);
    for (int j = 0; j < t; j++)
    {
        scanf("%d", &n);
        int a[n];
        max = -1;
        min = 1000000000;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);

            if (a[i] > max)
            {
                max = a[i];
            }
            if (a[i] < min)
            {
                min = a[i];
            }
        }
        printf("%d\n", max - min);
    }

    return 0;
}