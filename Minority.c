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
        char str[200001];
        int one = 0, zero = 0;
        scanf("%s", str);
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] == '1')
            {
                one++;
            }
            else
                zero++;
        }
        if (one == zero)
        {
            printf("%d\n", one - 1);
        }
        else if (one > zero)
        {
            printf("%d\n", zero);
        }
        else
            printf("%d\n", one);
    }

    return 0;
}
