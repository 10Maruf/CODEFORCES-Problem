#include <stdio.h>
int main()
{
    int m, n, a = 0, b = 0, count = 0;
    scanf("%d %d", &m, &n);
    int min = (m < n) ? m : n;
    for (int a = 0; a <= min; a++)
    {
        for (int b = 0; b <= min; b++)
        {
            if (a * a + b == n && a + b * b == m)
            {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}