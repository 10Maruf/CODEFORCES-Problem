#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i, flag = 0;
        int d;
        scanf("%d %d", &n, &d);
        char num[n + 1];
        scanf(" %[^\n]", num);
        for (i = 0; i < n; i++)
        {
            if (flag == 0)
            {
                if ((((int)num[i]) - 48) < d)
                {
                    printf("%d%c", d, num[i]);
                    flag = 1;
                }
                else
                {
                    printf("%c", num[i]);
                }
            }

            else
            {
                printf("%c", num[i]);
            }
        }
        if (flag == 0)
        {
            printf("%d", d);
        }
        printf("\n");
    }

    return 0;
}
