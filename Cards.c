#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int n, one = 0, zero = 0;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'n')
        {
            one++;
        }
        if (str[i] == 'z')
        {
            zero++;
        }
    }

    while (one--)
    {
        printf("1 ");
    }
    while (zero--)
    {
        printf("0 ");
    }

    return 0;
}
