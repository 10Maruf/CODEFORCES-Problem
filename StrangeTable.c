#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, m;
        long long x;
        scanf("%d %d %lld", &n, &m, &x);

        printf("%lld\n", (x - 1) % n * m + 1 + (x - 1) / n);
    }
    return 0;
}
