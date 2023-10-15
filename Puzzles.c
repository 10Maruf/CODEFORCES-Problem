#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    int temp;
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    int min = 10000000;
    for (int i = 0; i < m; i++)
    {
        for (int j = i + n - 1; j < m; j++)
        {
            if (a[j] - a[i] < min)
            {
                min = a[j] - a[i];
            }
        }
    }
    printf("%d\n", min);
}