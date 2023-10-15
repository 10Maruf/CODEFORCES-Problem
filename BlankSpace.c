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
        int n, count = 0, bl = 0;
        scanf("%d", &n);
        int ara[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ara[i]);
            if (ara[i] == 0)
            {
                count++;
                if (count > bl)
                {
                    bl = count;
                }
            }
            else
                count = 0;
        }
        printf("%d\n", bl);
    }

    return 0;
}
