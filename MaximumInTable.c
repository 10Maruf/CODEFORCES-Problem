#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        a[0][i] = 1;
        a[i][0] = 1;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            a[i][j] = a[i][j - 1] + a[i - 1][j];
        }
    }

    printf("%d", a[n - 1][n - 1]);
}