#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <limits.h>

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, x, y, z, temp, res;
        scanf("%d", &n);
        z = y = x = INT_MAX;
        char str[3];
        for (int i = 0; i < n; i++)
        {
            scanf("%d %2s", &temp, str);
            if (strcmp(str, "01") == 0)
                x = min(x, temp);
            else if (strcmp(str, "10") == 0)
                y = min(y, temp);
            else if (strcmp(str, "11") == 0)
                z = min(z, temp);
        }
        if (x == INT_MAX || y == INT_MAX)
        {
            res = min(INT_MAX, z);
        }
        else
            res = min(x + y, z);
        if (res == INT_MAX)
        {
            printf("-1\n");
        }
        else
            printf("%d\n", res);
    }

    return 0;
}
