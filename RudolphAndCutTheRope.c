#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int maxi(int a, int b)
{
    return a > b ? 1 : 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int num, count = 0;
        scanf("%d", &num);
        // int count = 0;
        while (num--)
        {
            int num1, num2;
            scanf("%d%d", &num1, &num2);
            if (maxi(num1, num2))
            {
                /* code */
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
