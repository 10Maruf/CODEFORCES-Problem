#include <stdio.h>

int main()
{
    int t, a, b, c, x, y;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);
        if (a >= x && b >= y)
            printf("YES\n");
        else if (a < x && b < y && (x - a + y - b) <= c)
            printf("YES\n");
        else if (a < x && b >= y && x - a <= c)
            printf("YES\n");
        else if (a >= x && b < y && y - b <= c)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}