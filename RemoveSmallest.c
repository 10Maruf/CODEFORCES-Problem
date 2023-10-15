#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                int temp;
                if (a[j] > a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        int flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] == 1 || a[i] == a[i + 1])
            {
                a[i] = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                flag++;
            }
        }
        if (flag == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}