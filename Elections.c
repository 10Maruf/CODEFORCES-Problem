#include <stdio.h>

int main()
{
    int t, a, b, c;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (0 <= a && 0 <= b && 0 <= c && a <= 1000000000 && b <= 1000000000 && c <= 1000000000)
        {
            if (a == b && b == c && c == a)
            {
                printf("1\t");
                printf("1\t");
                printf("1\t");
            }
            else if (a > b && a > c)
            {
                printf("0\t");
                printf("%d\t", a - b + 1);
                printf("%d\t", a - c + 1);
            }
            else if (b > a && b > c)
            {
                printf("%d\t", b - a + 1);
                printf("0\t");
                printf("%d\t", b - c + 1);
            }
            else if (c > b && c > a)
            {
                printf("%d\t", c - a + 1);
                printf("%d\t", c - b + 1);
                printf("0\t");
            }
            else if (a == b && a > c && b > c)
            {
                printf("1\t");
                printf("1\t");
                printf("%d\t", a - c + 1);
            }
            else if (a == c && a > b && c > b)
            {
                printf("1\t");
                printf("%d\t", a - b + 1);
                printf("1\t");
            }
            else if (c == b && c > a && b > a)
            {
                printf("%d\t", b - a + 1);
                printf("1\t");
                printf("1\t");
            }
        }
        printf("\n");
    }
    return 0;
}
