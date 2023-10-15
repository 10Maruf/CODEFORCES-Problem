#include <stdio.h>

int main()
{
    int t, i, n, a, b, c;
    scanf("%d", &t);
    while (t--)
    {
        n = 1;
        scanf("%d", &a);
        if (a > 999)
            c = 4;
        else if (a > 99)
            c = 3;
        else if (a > 9)
            c = 2;
        else if (a > 0)
            c = 1;

        b = a % 10;

        n = (b - 1) * 10 + c * (c + 1) / 2;

        printf("%d\n", n);
    }
    return 0;
}