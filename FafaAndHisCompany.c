#include <stdio.h>
int main()
{
    int a, b, c, d, i, j;
    scanf("%d", &a);
    j = 0;
    for (i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            j++;
        }
    }
    printf("%d", j);
    return 0;
}
