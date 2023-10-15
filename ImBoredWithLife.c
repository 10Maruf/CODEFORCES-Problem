#include <stdio.h>

void fact(int n)
{
    int i;
    long long int fact = 1;
    for (i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%lld\n", fact);
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a < b)
    {
        fact(a);
    }
    else
    {
        fact(b);
    }
}
