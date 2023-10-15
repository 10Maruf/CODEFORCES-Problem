#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, n;
    scanf("%d", &t);

    while (t--)
    {
        int a = 0, b = 0, c = 0;
        scanf("%d", &n);

        b = n / 3 + (n % 3);
        a = n / 3;
        c = n / 3;
        if (b == a)
        {
            b++;
            c--;
        }

        while (a <= c)
        {
            a++;
            c--;
        }

        if (a == b)
        {
            b++;
            a--;
        }

        printf("%d %d %d\n", a, b, c);
    }
    return 0;
}
