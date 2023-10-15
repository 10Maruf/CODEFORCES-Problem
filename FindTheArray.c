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
        int count = 0, sum = 0, b;
        scanf("%d", &b);
        if (b == 1)
        {
            printf("1\n");
        }
        else
        {
            for (int j = 1; sum < b; j += 2)
            {
                sum += j;
                count++;
            }
            printf("%d\n", count);
        }
    }
    return 0;
}
