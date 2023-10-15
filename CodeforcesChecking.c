#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s;

        char word[10] = "codeforces";
        scanf(" %c", &s);
        int i = 0;
        while (i < 10)
        {
            if (s == word[i])
            {
                printf("YES\n");
                break;
            }
            else
            {
                i++;
                continue;
            }
        }
        if (i == 10)
        {
            printf("NO\n");
        }
    }

    return 0;
}