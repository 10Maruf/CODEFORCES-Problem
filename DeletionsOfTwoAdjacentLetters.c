#include <stdio.h>
#include <string.h>

int main()
{

    int t, x, i, j, count;
    scanf("%d", &t);
    while (t--)
    {
        char s[100];
        char c;
        scanf("%s %c", s,&c);
        // scanf("%c",c);
        x = strlen(s);
        count = 0;
        for (j = 0; j < x; j = j + 2)
        {
            if (s[j] == c)
            {
                count = count + 1;
            }
        }
        if (count == 0)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }

    return 0;
}