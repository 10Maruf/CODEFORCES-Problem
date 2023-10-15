#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[2 * n];
        for (int j = 0; j < (2 * n); j++)
        {
            scanf("%d", &arr[j]);
        }
        int c_odd = 0;
        for (int j = 0; j < (2 * n); j++)
        {
            if (arr[j] % 2 == 1)
            {
                c_odd++;
            }
        }
        if (c_odd == n)
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