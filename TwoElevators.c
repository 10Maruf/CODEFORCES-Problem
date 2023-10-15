#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, somoy, somoy2, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d%d", &a, &b, &c);
        somoy2 = abs(c - b) + c - 1;
        somoy = a - 1;
        if (somoy < somoy2)
            printf("1\n");
        else if (somoy > somoy2)
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}