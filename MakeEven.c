#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int i, k = 0, l;
        char s[11];
        scanf("%s", &s);
        l = strlen(s);
        if ((s[l - 1]) % 2 == 0)
            printf("%d\n", 0);
        else
        {
            for (i = 0; i < l; i++)
            {
                if (s[i] % 2 == 0)
                {
                    k = 1;
                    break;
                }
            }
            if (k == 1)
            {
                if (s[0] % 2 == 0)
                    printf("%d\n", 1);
                else
                    printf("%d\n", 2);
            }
            else
                printf("%d\n", -1);
        }
    }
}
