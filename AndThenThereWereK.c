#include <stdio.h>

int main()
{

    int t, a;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &a);
        int x = 1;
        while (1)
        {
            if (x * 2 > a)
            {
                break;
            }
            x = x * 2;
        }
        printf("%d\n", x - 1);
    }
    return 0;
}