#include <stdio.h>
int comparefunc(int *a, int *b)
{
    return *a - *b;
}
int main()
{
    int t;
    scanf("%d", &t);
    int n;
    int a[200001];
    while (t--)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        qsort(a, n, sizeof(int), comparefunc);
        int count = 1;
        int three;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                count++;
            }
            else
            {
                count = 1;
            }

            if (count == 3)
            {
                three = a[i];
                break;
            }
        }
        if (count == 3)
        {
            printf("%d\n", three);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}