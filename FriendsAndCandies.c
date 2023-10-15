#include <Stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
            sum += a[j];
        }
        if (sum % n != 0)
        {
            printf("%d\n", -1);
        }
        else
        {
            int k = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[j] > (sum / n))
                {
                    k++;
                }
            }
            printf("%d\n", k);
        }
    }
}