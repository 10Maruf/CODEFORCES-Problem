#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int w, h, n, c = 1;
        scanf("%d%d%d", &w, &h, &n);
        while (w % 2 == 0)
        {
            c *= 2;
            w = w / 2;
        }
        while (h % 2 == 0)
        {
            c *= 2;
            h = h / 2;
        }
        if (n > c)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}