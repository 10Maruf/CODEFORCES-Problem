#include <stdio.h>
int main()
{
    int t, i, a, b;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d%d", &a, &b);
        if (a == 0)
            printf("1\n");
        else
        {
            printf("%d\n", (a + (b * 2) + 1));
        }
    }
    return 0;
}
