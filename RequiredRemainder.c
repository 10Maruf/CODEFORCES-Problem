#include <stdio.h>
main()
{
    int x, y, n, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d%d", &x, &y, &n);
        printf("%d\n", (n - y) / x * x + y);
    }
}