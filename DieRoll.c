#include <stdio.h>
int main()
{
    int a, b, max;
    scanf("%d %d", &a, &b);
    if (a >= b)
        max = a;
    else
        max = b;
    if (max == 6)
        printf("1/6");
    else if (max == 5)
        printf("1/3");
    else if (max == 4)
        printf("1/2");
    else if (max == 3)
        printf("2/3");
    else if (max == 2)
        printf("5/6");
    else
        printf("1/1");
    return 0;
}
