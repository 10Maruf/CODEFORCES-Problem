#include <stdio.h>
int main()
{
    int n, mag[100001], count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &mag[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (mag[i] != mag[i + 1])
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}
