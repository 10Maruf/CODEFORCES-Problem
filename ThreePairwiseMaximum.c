#include <stdio.h>
int main()
{
    int t, x, y, z;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d%d", &x, &y, &z);
        if (x == y && x >= z)
            printf("YES\n%d %d %d\n", x, z, z);
        else if (x == z && x >= y)
            printf("YES\n%d %d %d\n", x, y, y);
        else if (z == y && y >= x)
            printf("YES\n%d %d %d\n", x, x, z);
        else
            printf("NO\n");
    }
    return 0;
}
