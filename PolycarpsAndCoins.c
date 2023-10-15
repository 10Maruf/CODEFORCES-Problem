#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, mod, c1, c2;
        scanf("%d", &n);
        mod = n % 3;
        if (mod == 0)
        {
            c1 = n / 3;
            printf("%d %d\n", c1, c1);
        }
        else if (mod == 1)
        {
            c2 = n / 3;
            c1 = n - c2 * 2;
            printf("%d %d\n", c1, c2);
        }
        else
        {
            c2 = n / 3 + 1;
            c1 = n - c2 * 2;
            printf("%d %d\n", c1, c2);
        }
    }
    return 0;
}