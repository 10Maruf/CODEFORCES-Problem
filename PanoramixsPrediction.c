#include <stdio.h>

int isprime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int next_prime = -1;
    for (int i = n + 1; i <= m; i++)
    {
        if (isprime(i))
        {
            next_prime = i;
            break;
        }
    }
    if (next_prime == m)
        printf("YES\n");
    else
        printf("NO\n");
}