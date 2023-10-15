#include <stdio.h>
#include <stdlib.h>//not solved************

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        int x = 0, y = 0, m = 1, moves = 0;

        while (x != a || y != b)
        {
            int dx = abs(a - x), dy = abs(b - y);

            if (dx >= dy)
            {
                int d = (dx < m) ? dx : m;
                x += (a > x) ? d : -d;
            }
            else
            {
                int d = (dy < m) ? dy : m;
                y += (b > y) ? d : -d;
            }

            m++;
            moves++;
        }
        if (a == 1 && b == 1)
        {
            printf("%d\n", moves);
        }
        else
            printf("%d\n", moves + 1);
    }

    return 0;
}
