#include <stdio.h>
int main()
{
   long long int t, n;
    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld", &n);
        if (n <= 2)
            printf("0\n");
        else
            printf("%lld\n", (n - 1) / 2);
    }
}
