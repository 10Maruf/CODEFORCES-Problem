#include <stdio.h>
#include <string.h>
int temp;
int main()
{
    int x1, x2, x3;
    scanf("%d%d%d", &x1, &x2, &x3);
    // sort
    if (x1 > x2)
    {
        temp = x2;
        x2 = x1;
        x1 = temp;
    }
    if (x1 > x3)
    {
        temp = x3;
        x3 = x1;
        x1 = temp;
    }
    if (x3 < x2)
    {
        temp = x2;
        x2 = x3;
        x3 = temp;
    }
    printf("%d", x3 - x1);

    return 0;
}
