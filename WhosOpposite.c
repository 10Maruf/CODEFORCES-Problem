#include <stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int n = abs(a - b) * 2;
        if (a > n || b > n || c > n)
            printf("-1\n");
        else
        {
            if (c + (n / 2) <= n)
                printf("%d\n", c + (n / 2));
            else if (c - (n / 2) <= n)
                printf("%d\n", c - (n / 2));
            else
                printf("-1\n");
        }
        }
    return 0;
}