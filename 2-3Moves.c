#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    while (x--)
    {
        int y;
        scanf("%d", &y);
        int ans;
        if (y == 1)
        {
            ans = 2;
        }
        else if (y % 3 != 0)
        {
            ans = y / 3 + 1;
        }
        else
        {
            ans = y / 3;
        }
        printf("%d\n", ans);
    }
}