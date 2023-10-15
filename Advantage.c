#include <stdio.h>
int arr[300000];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        int max = 0, s_max = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] >= max)
            {
                s_max = max;
                max = arr[i];
            }
            else if (arr[i] > s_max)
                s_max = arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != max)
                printf("%d ", arr[i] - max);
            else
                printf("%d ", max - s_max);
        }
        printf("\n");
    }
    return 0;
}