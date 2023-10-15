#include <stdio.h>

int main()
{
    int n, p, q, k = 0;
    scanf("%d", &n);
    int a[109];
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
    for (int i = 2; i--;)
    {
        scanf("%d", &p);
        while (p--)
        {
            scanf("%d", &q);
            if (a[q] == 0)
            {
                a[q] = 1;
                k++;
            }
        }
    }
    printf(k == n ? "I become the guy." : "Oh, my keyboard!"); // ternary operator used{condition ? value_if_true : value_if_false}
    return 0;
}