#include <stdio.h>
int main()
{
    int i, j, k, count = 0, n, m;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            count++;
            j = i;
        }
        else
        {
            k = i;
        }
    }
    if (count > 1)
    {
        printf("%d", k + 1);
    }
    else
    {
        printf("%d", j + 1);
    }
    return 0;
}