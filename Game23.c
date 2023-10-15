#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if (m % n != 0 || m < n)
    {
        puts("-1");
    }
    else if (m == n)
    {
        puts("0");
    }

    else
    {
        int div = m / n;
        int two = 0, three = 0;
        while (div % 2 == 0)
        {
            div /= 2;
            two++;
        }
        while (div % 3 == 0)
        {
            div /= 3;
            three++;
        }
        if (div == 1)
            printf("%d", two + three);
        else
            puts("-1");
    }

    return 0;
}
