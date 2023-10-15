#include <stdio.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    for (int k = 1; k <= t; k++)
    {
        scanf("%d", &n);
        int evenSum = 0, oddSum = 0, a;
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a);
            if (a % 2 == 0)
            {
                evenSum = evenSum + a;
            }
            else if (a % 2 != 0)
            {
                oddSum = oddSum + a;
            }
        }

        if (evenSum > oddSum)
        {
            printf("YES\n");
        }
        else if (evenSum <= oddSum)
        {
            printf("NO\n");
        }
    }
    return 0;
}
