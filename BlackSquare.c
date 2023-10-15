#include <stdio.h>
#define max 1000000
int main()
{
    char f[max];
    int a, b, c, d, e = 0, i, j;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    scanf("%s", f);
    for (i = 0; f[i] != '\0'; i++)
    {
        j = a + b + c + d;
        if (j == 0)
        {
            e = 0;
            break;
        }
        if (f[i] == '1')
        {
            e = e + a;
        }
        if (f[i] == '2')
        {
            e = e + b;
        }

        if (f[i] == '3')
        {
            e = e + c;
        }
        if (f[i] == '4')
        {
            e = d + e;
        }
    }
    printf("%d", e);
    return 0;
}
