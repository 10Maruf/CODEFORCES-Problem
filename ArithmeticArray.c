#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i, j;
        scanf("%d", &n);
        int sum = 0;
        for (i = 0; i < n; i++)
        {
            int a;
            scanf("%d", &a);
            sum += a;
        }
        if (sum < n)
            printf("1\n");
        else
            printf("%d\n", sum - n);
    }

    return 0;
}
