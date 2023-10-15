#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i = 1, sum = 0, sum1 = 0, count = 0;
    while (i > 0)
    {
        sum = sum + i;
        sum1 = sum1 + sum;

        i++;
        if (sum1 <= n)
        {

            count++;
            continue;
        }
        else
            break;
    }
    printf("%d", count);
}