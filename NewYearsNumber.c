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
        int x;
        scanf("%d", &x);

        int flag = 0;

        for (int i = 0; i <= x / 2021; i++)
        {
            int remainder = x - i * 2021;
            if (remainder % 2020 == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag)
            puts("YES");
        else
            puts("NO");
    }

    return 0;
}
