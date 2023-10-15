#include <stdio.h>
int main()
{
    int t, a, b, x;
    scanf("%d", &t);
    for (int j = 1; j <= t; j++)
    {
        scanf("%d %d", &a, &b);
        if (a == b)
        {
            a = 2 * a;
            b = 2 * b;
        }
        if (a > b)
        {
            b = 2 * b;
            if (a < b)
            {
                while (a != b)
                {
                    a += 1;
                }
            }
            else
            {
                b = a;
            }
        }
        if (a < b)
        {
            a = 2 * a;
            if (a > b)
            {
                while (a != b)
                {
                    b += 1;
                }
            }
            else
            {
                a = b;
            }
        }
        printf("%d\n", a * b);
    }
    return 0;
}
