#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tc;
    scanf("%d", &tc);

    while (tc--)
    {
        int n, m, k, h;
        scanf("%d %d %d %d", &n, &m, &k, &h);

        int *arr = (int *)malloc(n * sizeof(int));
        if (arr == NULL)
        {
            printf("Memory allocation failed!\n");
            return 1;
        }

        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &arr[i]);
        }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int par = h - arr[i];
            if (par < 0)
            {
                par = -par;
            }
            if (par != 0 && par % k == 0 && (par <= (m - 1) * k))
            {
                cnt++;
            }
        }

        free(arr);
        printf("%d\n", cnt);
    }

    return 0;
}
