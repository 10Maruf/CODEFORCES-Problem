#include <stdio.h>
#include <math.h>
#include <string.h>

int main()

{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b, n, count = 0;
        scanf("%d %d %d", &a, &b, &n);

        while (a <= n && b <= n)
        {
            if (a > b)
            {
                b += a;
                count++;
            }
            else if (a == b)
            {
                b += a;
                count++;
            }
            else
            {
                a += b;
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
