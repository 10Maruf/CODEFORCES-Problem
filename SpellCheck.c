
#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, x;
        char s[100];

        scanf("%d\n%s", &n, &s);

        int T = 0, i = 0, m = 0, u = 0, r = 0;
        for (x = 0; x < strlen(s); x++)
        {
            if (s[x] == 'T')
                T++;
            if (s[x] == 'i')
                i++;
            if (s[x] == 'm')
                m++;
            if (s[x] == 'u')
                u++;
            if (s[x] == 'r')
                r++;
        }
        if (n == 5 && T == 1 && i == 1 && m == 1 && u == 1 && r == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
