#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
bool check(long long int n, long long int m)
{
    if (m == n)
        return true;
    if (m > n || n % 3 != 0)
        return false;
    return check(n / 3, m) || check(n - n / 3, m);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n, m;
        scanf("%lld %lld", &n, &m);
        check(n, m) == true ? puts("YES") : puts("NO");
    }
        return 0;
}
