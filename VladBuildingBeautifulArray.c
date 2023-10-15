#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        bool flg = false;
        for (int i = 0; i < n - 1; i++)
        {
            if ((a[i] % 2) != (a[i + 1] % 2))
            {
                flg = true;
                break;
            }
        }

        if (flg == false)
        {
            puts("YES");
        }
        else
        {
            int te = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                if (a[i] < te)
                {
                    te = a[i];
                }
            }

            if (te % 2 == 1)
            {
                puts("YES");
            }
            else
            {
                puts("NO");
            }
        }
    }

    return 0;
}
