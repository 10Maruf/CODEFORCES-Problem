#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r, b;
    scanf("%d%d", &r, &b);
    int diff_day, same_day;
    if (r > b)
    {
        diff_day = b;
    }
    else
        diff_day = r;
        same_day=abs(r-b)/2;
        printf("%d %d",diff_day,same_day);

    return 0;
}
