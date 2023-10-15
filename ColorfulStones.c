#include <stdio.h>
#include <string.h>

int main()
{

    char s[51];
    char t[51];
    int posi = 0;
    scanf("%s%s", s, t);
    for (int i = 0; i <= strlen(t); i++)
    {

        if (s[posi] == t[i])
            posi++;
    }
    printf("%d", posi + 1);

    return 0;
}