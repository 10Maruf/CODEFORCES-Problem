#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count = 1, temp = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] > a[i])
        {
            count++;
            if (count > temp)
                temp = count;
        }
        else
            count = 1;
    }
    printf("%d", temp);
    return 0;
}