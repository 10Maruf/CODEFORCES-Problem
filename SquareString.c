#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, c = 0;
        char s[101];
        scanf("%s", s);
        n = strlen(s);
        if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                if (s[i] == s[(n / 2) + i])
                    c++;
            }
        }
        if (n % 2 == 0 && c == n / 2)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
