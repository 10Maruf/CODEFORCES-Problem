#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, k;
        scanf("%d %d", &x, &k);
        if (x % k == 0)
        {
            puts("2");
            printf("%d %d\n", x - 1, 1);
        }
        else
        {
            puts("1");
            printf("%d\n", x);
        }
    }
    return 0;
}
