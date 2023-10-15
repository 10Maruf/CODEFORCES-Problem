#include <stdio.h>

int main()
{
    int h, m, a, i, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d %d", &h, &m);
        a = 1440 - (h * 60 + m);
        printf("%d\n", a);
    }
}
