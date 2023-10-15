#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, x, y, z, sum_x = 0, sum_y = 0, sum_z = 0;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d%d%d", &x, &y, &z);
        sum_x = sum_x + x;
        sum_y = sum_y + y;
        sum_z = sum_z + z;
    }
    if (sum_x==0&&sum_y==0&&sum_z==0)
    {
        printf("YES");
    }
    else printf("NO");

    return 0;
}
