#include <stdio.h>
#include <string.h>

int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, d;
        scanf("%d %d", &n, &d);
        int ar[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &ar[i]);
        qsort(ar, n, sizeof(int), cmp);
        if (ar[n - 1] <= d)
            printf("YES\n");
        else
        {
            if (ar[0] + ar[1] > d)
                printf("NO\n");
            else
                printf("YES\n");
        }
    }
}