#include <stdio.h>
int main()
{
    int t, a, b, c, n, f;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d%d%d", &a, &b, &c, &n);
        f = n + a + b + c;
        if (f % 3 != 0)
        {
            printf("NO\n");
        }
        else if (f < 3 * a || f < 3 * b || f < 3 * c)
        {
            printf("NO\n");
        }
        else
            printf("YES\n");
    }
    return 0;
}