#include <stdio.h>

int main()
{
    int i, a;
    scanf("%d", &a);

    if (a % 2 != 0)
        printf("-1");
    else
    {
        i = a;
        while (i != 0)
        {
            printf("%d ", i);
            i--;
        }
    }
}
