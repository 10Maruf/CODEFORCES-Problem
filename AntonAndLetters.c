#include <stdio.h>
#include <string.h>
int main()
{
    char set[1001], ch;
    int count=0, count2 = 0;
    scanf(" %[^\n]", set); //%s not working because of white space
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        count = 0;
        for (int i = 0; i < strlen(set); i++)
        {
            if (set[i] == ch)
                count++;
        }
        if (count > 0)
            count2++;
    }
    printf("%d", count2);

    return 0;
}