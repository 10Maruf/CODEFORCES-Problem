#include <stdio.h>
#include <string.h>
int main()
{
    int n, k, count = 0;
    scanf("%d%d", &n, &k);
    int a = 240 - k, b = 0;
    for (int i = 1; i <= n; i++)
    {
        b = i * 5 + b;
        if (a >= b)
        {
            count++;
        }
    }
    printf("%d",count);

    return 0;
}
