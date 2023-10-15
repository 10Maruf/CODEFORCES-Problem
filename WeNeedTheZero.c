#include <stdio.h>
main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        int Z = 0, Y = 0;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            Z = Z ^ arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            Y = Y ^ (Z ^ arr[i]);
        }
        if (Y == 0)
        {
            printf("%d\n", Z);
        }
        else
        {
            printf("-1\n");
        }
    }
}