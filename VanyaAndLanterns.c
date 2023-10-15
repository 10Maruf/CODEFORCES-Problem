#include <stdio.h>
int main()
{
    int n;
    long long int l;
    scanf("%d %lld", &n, &l);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int temp;
    for (int i = 0; i < n; i++) // sorting all lanterns point
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    long double max = 0;
    long double max1 = 0;
    if (a[0] - 0 > max)
    {
        max = a[0];
    }
    if (l - a[n - 1] > max)
    {
        max = l - a[n - 1];
    }
    for (int i = 0; i < (n - 1); i++)
    {
        if (a[i + 1] - a[i] > max1)
        {
            max1 = a[i + 1] - a[i];
        }
    }
    if (max > (max1 / 2))
    {
        printf("%Lf\n", max);
    }
    else
    {
        printf("%Lf\n", max1 / 2);
    }
}