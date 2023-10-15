#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int pl1, pl2;
        scanf("%lld %lld", &pl1, &pl2);
        printf("%lld\n", pl1 + pl2);
    }

    return 0;
}
