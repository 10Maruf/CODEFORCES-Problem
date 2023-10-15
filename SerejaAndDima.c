#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, s = 0, d = 0;
    scanf("%d", &n);
    int a[n];
    int x = 0, y = n - 1;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (a[x] >= a[y])
            {
                s += a[x];
                x++;
            }
            else
            {
                s += a[y];
                y--;
            }
        }
        else
        {
            if (a[x] >= a[y])
            {
                d += a[x];
                x++;
            }
            else
            {
                d += a[y];
                y--;
            }
        }
    }
    printf("%d %d\n", s, d);
    return 0;
}
