#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char a[1001], b[1001];
        int m, x = 1, k = 0;
        scanf("%d", &m);
        scanf("%s", a);
        for (int j = 0; j < m; j++)
        {
            if (a[j] != a[j + 1])
            {
                b[k++] = a[j];
            }
        }
        for (int l = 0; l < k - 1; l++)
        {
            for (int p = l + 1; p < k; p++)
            {
                if (b[l] == b[p])
                {
                    x = 0;
                    break;
                }
            }
        }
        if (x == 0)
        {
            printf("NO\n");
        }
        if (x == 1)
        {
            printf("YES\n");
        }
        k = 0;
    }
    return 0;
}