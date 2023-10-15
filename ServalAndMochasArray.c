#include <stdio.h>

int a[107];

int gcd(int a, int b) // GCD function
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        int ans = 0;
        scanf("%d", &n);
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &a[j]);
        }
        for (int j = 1; j < n && ans != 1; j++)
        {
            for (int k = j + 1; k <= n; k++)
            {
                if (gcd(a[j], a[k]) <= 2)
                {
                    ans = 1;
                    break;
                }
            }
        }
        if (ans == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}