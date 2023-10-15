#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int numTestCases;
    scanf("%d", &numTestCases);
    while (numTestCases--)
    {
        int n, m, k, x, y;
        scanf("%d%d%d%d%d", &n, &m, &k, &x, &y);
        int flag = 1;
        for (int i = 0; i < k; i++)
        {
            int ixi, iyi;
            scanf("%d %d", &ixi, &iyi);
            int ddy = abs(y - iyi);
            int ddx = abs(x - ixi);
            if (!((ddx + ddy) % 2))
            {
                flag = 0;
            }
        }
        if (flag)
        {
            puts("YES");
        }
        else
        {
            puts("NO");
        }
    }
    return 0;
}
