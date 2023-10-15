#include <stdio.h>
#include <math.h>
int main(void)
{
    int t;
    long long int n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lld", &n);
        long long int a = sqrt(n);
        long long int i;
        for (i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
            {

                break;
            }
        }
        puts((i * i > a && a * a == n && n > 1) ? "YES" : "NO");//using puts for time reduce execution time
    }
}
