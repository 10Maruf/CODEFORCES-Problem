#include <stdio.h>

int main()
{
    long long int n, t, x;
    scanf("%lld", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%lld", &n);
        if (n % 7 == 0)
        {
            printf("%lld\n", n);
        }
        else if (n % 7 != 0)
        {
            n = n / 10;
            n = n * 10;
            while (n % 7 != 0)
            {
                n++;
            }
            printf("%d\n", n);
        }
    }

    return 0;
}
