#include <stdio.h>
int main()
{
    long long int n, i;
    long long int f = 0;
    scanf("%lld", &n);
    if (n % 2 == 0)
    {
        f = n / 2; // for even
    }
    else
    {
        f = -1 - n / 2; // for odd
    }
    printf("%lld", f);
    return 0;
}