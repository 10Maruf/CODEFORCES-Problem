#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[5000], b[5000];
    int n, i, j = 0, k, l;
    scanf("%d", &n);
    scanf("%s%s", a, b);
    for (i = 0; i < n; i++)
    {
        if (abs(a[i] - b[i]) <= 5)
        {
            j += abs(a[i] - b[i]);
        }
        else
        {
            j += 10 - abs(a[i] - b[i]);
        }
    }
    printf("%d", j);
    return 0;
}
