#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int sum = 0,sum1=0;
        int n;
        scanf("%d", &n);
        int arr[n];
        if (n == 2)
        {
            for (int i = 0; i < n; i++)
            {
                scanf("%d", &arr[i]);
            }
            if (arr[0] % 2 == 0 && arr[1] % 2 == 0)
            {
                puts("YES");
            }
            else if (arr[0] % 2 == 1 && arr[1] % 2 == 1)
            {
                puts("YES");
            }
            else
                puts("NO");
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                scanf("%d", &arr[i]);
                if (i != 0 || i != 1)
                {
                    sum += arr[i];
                }
                else sum1+=arr[i];
            }
            if ((sum1) % 2 == 0 && sum % 2 == 0)
            {
                puts("YES");
            }
            else if ((sum1) % 2 == 1 && sum % 2 == 1)
            {
                puts("YES");
            }
            else
                puts("NO");
        }
    }

    return 0;
}
