#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int t;
    scanf("%lld", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        long long int ara[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &ara[i]);
        }
        if (ara[0] + ara[1] > ara[n-1])
            puts("-1");
        else
            printf("1 2 %lld\n", n);
    }
    return 0;
}
