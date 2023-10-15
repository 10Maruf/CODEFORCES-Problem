#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[10];
        scanf("%s", s);
        char zero = '0';
        int len = strlen(s);
        for (int i = 0; i < len; i++)
        {
            if (s[i] == '?')
                s[i] = zero;
            else
                zero = s[i];
        }
        printf("%s\n", s);
    }
    return 0;
}
