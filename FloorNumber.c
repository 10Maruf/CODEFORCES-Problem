#include <stdio.h>
int main()
{
    int t, n, x, a;
    scanf("%d", &t);
    while (t--)
    {
        a = 1;
        scanf("%d %d", &n, &x);
        for (int i = 2; i < n; i = i + x)
        {
            a++;
        }
        printf("%d\n", a);
    }

    return 0;
}