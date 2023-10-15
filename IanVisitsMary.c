#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long x, y;
        scanf("%lld %lld", &x, &y);
        printf("2\n1 %lld\n%lld %lld\n", y - 1, x, y);
    }
    return 0;
}