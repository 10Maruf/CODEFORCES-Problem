#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int n, m, a, b;
    scanf("%d%d%d%d", &n, &m, &a, &b);

    if ((m * a) <= b)
    {
        printf("%d", n * a);
    }
    else
    {
        if (n % m == 0)
        {
            printf("%d", (n / m) * b);
        }
        else
        {
            if ((n % m) * a <= b)
            {
                printf("%d", (n % m) * a + (n / m) * b);
            }
            else
            {
                printf("%d", b + (n / m) * b);
            }
        }
    }
    return 0;
}
