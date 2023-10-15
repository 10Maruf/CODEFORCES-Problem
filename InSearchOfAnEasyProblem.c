#include <stdio.h>
int main()
{
    int n, ara[101], sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
        sum += ara[i];
        if (sum > 0)
        {
            printf("HARD");
            break;
        }
    }
    if (sum == 0)
    {
        printf("EASY");
    }

    return 0;
}
