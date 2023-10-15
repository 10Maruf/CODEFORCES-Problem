#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        int x = 0, y = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);

            if (arr[i] % 2 == 0)
            {
                x++;
            }
            else
            {
                y++;
            }
            sum = sum + arr[i];
        }
        if (sum % 2 != 0)
        {
            printf("Yes\n");
        }
        else
        {
            if (x != 0 && y != 0)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }

    return 0;
}