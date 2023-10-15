#include <stdio.h>
int main()
{
    int i, t, x, y, z;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d%d", &x, &y, &z);
        if (x + y == z || y + z == x || x + z == y || x == y && z % 2 == 0 || x == z && y % 2 == 0 || y == z && x % 2 == 0)
        {
            puts("YES");
        }
        else
        {
            puts("NO");
        }
    }
}
