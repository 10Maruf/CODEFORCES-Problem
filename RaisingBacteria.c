#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int b, sum = 0;
    scanf("%d", &b);
    while (b > 0)
    {
        sum += b % 2;
        b = b / 2;
    }
    printf("%d", sum);
    return 0;
}
