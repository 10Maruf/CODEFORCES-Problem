#include <stdio.h>
#include <math.h>
int main()
{
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    int d1 = x2 - x1;
    int d2 = y2 - y1;
    if (d1 == 0 && d2 != 0)
    {
        printf("%d %d %d %d", x1 + d2, y1, x2 + d2, y2);
    }
    else if (d1 != 0 && d2 == 0)
    {
        printf("%d %d %d %d", x1, y1 + d1, x2, y2 + d1);
    }
    else if (d1 != 0 && d2 != 0)
    {
        if (fabs(d1) == fabs(d2))
        {
            printf("%d %d %d %d", x1, y2, x2, y1);
        }
        else
            printf("-1");
    }
    else
        printf("-1");
    return 0;
}
