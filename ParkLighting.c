#include <stdio.h>
int main()
{
    int t, x, y;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &x, &y);

        printf("%d\n", (x * y + 1) / 2);
    }
    return 0;
}
