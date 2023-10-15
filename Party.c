#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define MAX(a, b) (a > b ? a : b)
int main()
{

    int ans = 0, n, c = 0, i, x;
    scanf("%d", &n);
    int arr[n + 9];

    for (i = 1; i <= n; i++)
        scanf("%d", &arr[i]);

    for (i = 1; i <= n; i++)
    {
        c = 0;
        x = arr[i];
        while (x != -1)
        {
            x = arr[x];
            c++;
        }
        ans = MAX(ans, c);
    }
    printf("%d\n", ans + 1);

    return 0;
}
