#include <stdio.h>

int main()
{
    int a, b, t;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &a, &b);
        if (a == b)
        {
            printf("%d\n", 0);
        }
        else if (b > a)
        {
            int x = b - a;
            if (x < 10)
                printf("%d\n", 1);
            else if (x >= 10)
            {
                if (x % 10 == 0)
                    printf("%d\n", x / 10);
                else if (x % 10 != 0)
                    printf("%d\n", (x / 10) + 1);
            }
        }
        else if (a > b)
        {
            int y = a - b;
            if (y < 10)
                printf("%d\n", 1);
            else if (y >= 10)
            {
                if (y % 10 == 0)
                    printf("%d\n", y / 10);
                else if (y % 10 != 0)
                    printf("%d\n", (y / 10) + 1);
            }
        }
    }
    return 0;
}