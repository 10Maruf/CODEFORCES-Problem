#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        int n, a[1000] = {0}, c = 0;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        for (int i = 0; i < strlen(s) - 1; i++)
        {
            if (a[(int)s[i]] == 0)
            {
                for (int j = i + 1; j < strlen(s); j++)
                {
                    if ((s[i] == s[j]) && ((i % 2 == 0 && j % 2 == 1) || (i % 2 == 1 && j % 2 == 0)))
                    {
                        c++;
                    }
                }
                a[(int)s[i]] == 1;
            }
        }
        for (int i = 0; i < strlen(s) - 1; i++)
        {
            if (s[i] == s[i + 1])
                c++;
        }
        if (c == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}