#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int t, n, count = 0;
    scanf("%d", &t);
    while (t--)
    {

        count = 0;
        scanf("%d", &n);
        while (n % 6 == 0)
        {
            n /= 6;
            count++;
        }
        while (n % 3 == 0)
        {
            n /= 3;
            count = count + 2;
        }
        if (n != 1)
            count = -1;
        printf("%d\n", count);
    }
    return 0;
    return 0;
}
