#include <stdio.h>
int main()
{
    int arr[100], n, i, t, j, k;
    scanf("%d", &t);
    while (t--)
    {
        int count = 0;
        scanf("%d", &n);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        for (j = 0; j < n; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                if (arr[j] == arr[k])
                {
                    count++;
                    break;
                }
            }
            if (count != 0)
            {
                break;
            }
        }
        if (count == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}