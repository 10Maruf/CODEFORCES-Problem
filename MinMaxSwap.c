#include <stdio.h>

int n;
int a[110], b[110];
int swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
void solve()
{
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
        if (a[i] > b[i])
        {
            swap(&a[i], &b[i]);
        }
    }
    int max1 = a[0], max2 = b[0];
    for (i = 0; i < n; i++)
    {
        max1 = max(max1, a[i]);
        max2 = max(max2, b[i]);
    }
    printf("%d\n", max1 * max2);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
}
