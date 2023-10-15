#include <stdio.h>
#include <string.h>
int main()
{
    int n, a, b, c, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        b = 0, c = 0;
        scanf("%d", &a);
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &x);
            if (i % 2 == 0 && x % 2 != 0)
            {
                b++;
            }
            else if (i % 2 != 0 && x % 2 == 0)
            {
                c++;
            }
        }
        if (b == c)
        {
            printf("%d\n", b);
        }
        else
        {
            printf("-1\n");
        }
    }
}
