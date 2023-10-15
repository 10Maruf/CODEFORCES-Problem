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

        for (int i = 0; i < n; i++)
        {

            scanf("%d", &arr[i]);
        }

        int result[n];

        int len = n / 2;

        if (n * 2 == n)
        {
            for (int i = 0, j = n - 1, k = 0; i < len; i++, j--, k++)
            {
                result[k] = arr[i];
                k++;
                result[k] = arr[j];
            }
            for (int i = 0; i < n; i++)
            {
                printf("%d ", result[i]);
            }
        }
        else
        {
            for (int i = 0, j = n - 1, k = 0; i < len; i++, j--, k++)
            {
                result[k] = arr[i];
                k++;
                result[k] = arr[j];
            }
            result[len * 2] = arr[len];
            for (int i = 0; i < n; i++)
            {
                printf("%d ", result[i]);
            }
        }
    }

    return 0;
}