#include <stdio.h>

int main()
{
    int t, n, i, j;
    scanf("%d", &t);
    while (t--)
    {
        int n, d = 0;
        int count = 0;
        scanf("%d", &n);
        int x[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &x[i]);
            if (x[i] == 1)
            {
                count++;
            }
            else
            {
                d++;
            }
        }

        if (count > 0)
        {
            if (count % 2 == 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            if (d % 2 == 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}
