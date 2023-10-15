#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int min(int a, int b)
{
    return a < b ? a : b;
}

int main()
{
    int k1, k2, k3, k4;
    scanf("%d %d %d %d", &k1, &k2, &k3, &k4);

    int ans = 0;
    int minimum = min(min(k1, k3), k4);
    if (minimum != 0)
    {
        ans += minimum * 256;
    }

    k1 = k1 - minimum;
    minimum = min(k1, k2);
    ans += minimum * 32;

    printf("%d\n", ans);
    return 0;
}
