#include <stdio.h>
int main()
{
    long long int n, k, i, j;

    scanf("%lli %lli", &n, &k);

    if (k <= (n + 1) / 2)
    {
        i = k * 2 - 1;
        printf("%lli", i);
    }
    else
    {
        j = (k - (n + 1) / 2) * 2;
        printf("%lli", j);
    }
    return 0;
}