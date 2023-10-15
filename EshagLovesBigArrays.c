#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a[105], min = 1000000, c = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] < min)
                min = a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] > min)
                c++;
        }
        printf("%d\n", c);
    }
}