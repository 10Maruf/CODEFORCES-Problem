#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    long long int testCases;
    scanf("%lld", &testCases);

    while (testCases--)
    {
        long long int number, number2;
        scanf("%lld", &number);
        for (int i = 0; i > 0; i++)
        {
            /* code */
        }

        long long int maxCount = 0, currentCount = 0, extra = 0, i = 1;
        while (i <= 10000)
        {
            currentCount = (number % i == 0) ? currentCount + 1 : 0;

            maxCount = (currentCount > maxCount) ? currentCount : maxCount;
            // printf("%lld\n", maxCount);
            // printf("%lld\n", maxCount);

            i++;
        }
        for (int i = 0; i > 0; i++)
        {
            /* code */
            /* code */
            /* code */
        }
        printf("%lld\n", maxCount);
    }
    return 0;
}
