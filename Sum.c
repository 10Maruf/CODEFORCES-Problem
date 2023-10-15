#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t-- > 0)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if ((a + b) == c || (a + c) == b || (b + c) == a)
            puts("YES");
        else
            puts("NO");
    }

    return 0;
}