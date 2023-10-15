#include <stdio.h>
#include <string.h>
int main()
{
    char x[51];
    int t, j, a, b, i;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", x);
        a = 0;
        b = 0;
        for (i = 0; i < strlen(x); i++)
        {
            if (x[i] == 'B')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        if (a == b)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
