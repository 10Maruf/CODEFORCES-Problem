#include <stdio.h>

int main()
{
    long long t;
    scanf("%lld", &t);

    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        long long a[n];
        long long sum = n + 1;

        for (long long i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
        }

        for (long long i = 0; i < n; i++)
        {
            printf("%lld ", sum - a[i]);
        }
        printf("\n");
    }

    return 0;
}
