#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l, r;
        scanf("%d%d", &l, &r);
        if (l * 2 <= r)
        {
            printf("%d %d\n", l, l * 2);
        }
        else
            printf("-1 -1\n");
    }
    return 0;
}
