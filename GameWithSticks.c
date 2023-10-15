#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int a, b, c, d = 0, e;
    scanf("%d %d", &a, &b);
    c = a * b;
    while (c > 0)
    {
        c = a * b;
        if (c > 0)
        {
            a--;
            b--;
            d++;
        }
    }
    if (d % 2 == 0)
        printf("Malvika");
    else
        printf("Akshat");

    return 0;
}
