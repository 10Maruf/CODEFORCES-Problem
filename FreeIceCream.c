#include <stdio.h>
int main()
{
    long long int n, i, y, d, count = 0;
    char a[2];
    scanf("%lld %lld", &n, &y);
    for (i = 0; i < n; i++)
    {
        scanf("%s%lld", a, &d);
        if (a[0] == '+')
        {
            y += d;
        }
        else if (a[0] == '-' && y < d)
        {
            count++;
        }
        else if (a[0] == '-' && y >= d)
        {
            y -= d;
        }
    }
    printf("%lld %lld", y, count);
    return 0;
}
