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
        int brd, slc, hm;
        scanf("%d %d %d", &brd, &slc, &hm);

        if (brd - 1 == slc + hm)
        {
            printf("%d\n", 2 * (slc + hm) + 1);
        }
        else if (brd - 1 > slc + hm)
        {
            printf("%d\n", 2 * (slc + hm) + 1);
        }

        else
        {
            printf("%d\n", 2 * brd - 1);
        }
    }
    return 0;
}
