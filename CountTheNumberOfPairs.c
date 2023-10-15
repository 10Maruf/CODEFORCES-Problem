#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, count = 0, i, co = 0, k;
        int c[124] = {0};
        scanf("%d%d", &n, &k);
        char str[n];
        scanf("%s", str);
        for (int i = 0; i < n; i++)
        {
            int x = str[i];
            c[x]++;
        }
        for (i = 97; i < 123; i++)
        {
            int min = c[i];
            if (c[i - 32] < min)
            {
                min = c[i - 32];
            }
            count += min;
            co += ((c[i] + c[i - 32] - 2 * min) / 2);
        }
        if (co <= k)
        {
            co = co;
        }
        else if (co > k)
        {
            co = k;
        }
        printf("%d\n", count + co);
    }
}