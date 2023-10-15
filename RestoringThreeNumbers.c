#include <stdio.h>

int main()
{
    int x, y, z, d;
    scanf("%d %d %d %d", &x, &y, &z, &d);
    if (x >= y && x >= z && x >= d)
        printf("%d %d %d", x - y, x - z, x - d);
    else if (y >= x && y >= z && y >= d)
        printf("%d %d %d", y - x, y - z, y - d);
    else if (z >= y && z >= x && z >= d)
        printf("%d %d %d", z - y, z - x, z - d);
    else if (d >= y && d >= z && d >= x)
        printf("%d %d %d", d - y, d - z, d - x);

    return 0;
}