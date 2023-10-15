#include <stdio.h>

int main()
{
    int n, a, b, r1, r2, i;
    scanf("%d", &n);
    a = 0;
    b = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &r1, &r2);
        if (r1 > r2)
        {
            a++;
        }
        if (r1 < r2)
        {
            b++;
        }
    }
    if (a > b)
    {
        printf("Mishka");
    }
    if (a < b)
    {
        printf("Chris");
    }
    if (a == b)
    {
        printf("Friendship is magic!^^");
    }

    return 0;
}
