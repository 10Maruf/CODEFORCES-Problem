#include <stdio.h>

int main()
{
    long long int n, i, j, c1 = 0, c2 = 0, c3 = 0, x = 0, y = 0, z = 0, min;
    scanf("%lld", &n);
    long long int a[n], a1[n], a2[n], a3[n];
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
        if (a[i] == 1)
        {
            c1++;
            a1[x] = i + 1;
            x++;
        }
        else if (a[i] == 2)
        {
            c2++;
            a2[y] = i + 1;
            y++;
        }
        else
        {
            c3++;
            a3[z] = i + 1;
            z++;
        }
    }
    min = c1;
    if (c2 < min)
        min = c2;
    if (c3 < min)
        min = c3;
    printf("%lld\n", min);
    i = 0;
    while (i < min)
    {
        printf("%lld %lld %lld\n", a1[i], a2[i], a3[i]);
        i++;
    }
    return 0;
}
