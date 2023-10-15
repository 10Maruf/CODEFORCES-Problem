#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char string[101];
    int flag = 0, potaka = 0;
    scanf("%s", string);
    int len = strlen(string);
    char k = tolower(string[0]);

    for (int i = 0; i < len; i++)
    {
        if ('A' <= string[i] && string[i] <= 'Z' && k != string[0])
        {
            flag++;
        }
        else if ('a' <= string[i] && string[i] <= 'z' && k == string[0])
        {
            potaka++;
        }
    }

    if (flag == len)
    {
        printf("%s", strlwr(string));
    }
    else if (flag < len && flag != 0)
    {
        printf("%s", string);
    }
    else if (potaka == len && len != 1)
    {
        printf("%s", string);
    }
    else if (potaka == 1)
    {
        if (len == 1)
        {
            printf("%s", strupr(string));
        }
        else
        {
            strlwr(string);
            string[0] = string[0] - 32;
            printf("%s", string);
        }
    }
    else
    {
        printf("%s", string);
    }

    return 0;
}
