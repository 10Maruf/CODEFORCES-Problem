#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    printf("%d\n", n / 2);
    if (n % 2 == 0)
        for (i = 0; i < n / 2; i++)
            printf("2 ");
    else
    {
        for (i = 0; i < n / 2 - 1; i++)
            printf("2 ");
        printf("3");
    }
    return 0;
}
