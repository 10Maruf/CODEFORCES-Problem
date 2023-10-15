#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, *A, i, x = 0, liars = 0;
        scanf("%d", &n);
        A = (int *)malloc(n * sizeof(int));
        for (i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
        }
        while (1)
        {
            x = 0;
            for (i = 0; i < n; i++)
            {
                if (A[i] > liars)
                {
                    x++;
                }
            }
            if (liars == x)
            {
                printf("%d\n", liars);
                break;
            }
            else
            {
                liars++;
                if (liars > n)
                {
                    printf("-1\n");
                    break;
                }
            }
        }
    }
    return 0;
}