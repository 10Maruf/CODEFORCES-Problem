#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{

    long long t;
    scanf("%lld", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        while (n % 2 == 0)
        {
            n /= 2;
        }
        puts(n == 1 ? "NO" : "YES");
    }
        return 0;
}
