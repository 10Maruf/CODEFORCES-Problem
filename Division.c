#include <stdio.h>

int main()
{
    int t, x;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &x);
        if (x < 1400)
            puts("Division 4");
        else if (x < 1600)
            puts("Division 3");
        else if (x < 1900)
            puts("Division 2");
        else
            puts("Division 1");
    }
}