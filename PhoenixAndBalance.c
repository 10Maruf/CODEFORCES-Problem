#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, sum1, sum2 = 0;
        scanf("%d", &n);
        sum1 = pow(2, n);
        for (int i = 1; i <= n / 2 - 1; i++)
        {
            sum1 = sum1 + pow(2, i);
        }
        for (int i = n / 2; i < n; i++)
        {
            sum2 = sum2 + pow(2, i);
        }
        printf("%d\n", abs(sum1 - sum2));
    }
    return 0;
}