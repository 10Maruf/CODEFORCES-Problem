#include <stdio.h>
int main()
{

    int i, j, count, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, total, t;
    char a[20];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", a);
        if (a[0] == 'T')
            sum1 = sum1 + 4;
        else if (a[0] == 'C')
            sum2 = sum2 + 6;
        else if (a[0] == 'O')
            sum3 = sum3 + 8;
        else if (a[0] == 'D')
            sum4 = sum4 + 12;
        else if (a[0] == 'I')
            sum5 = sum5 + 20;
    }
    total = sum1 + sum2 + sum3 + sum4 + sum5;
    printf("%d\n", total);
}
