#include <stdio.h>
#include <string.h>

int main()
{
    char string[201];
    int flag = 0;
    scanf("%s", string);
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == 'W' && string[i + 1] == 'U' && string[i + 2] == 'B')
        {
            if (i > 0 && flag != 0)
            {
                printf(" ");
            }

            i += 2;
        }
        else
        {
            flag++;
            printf("%c", string[i]);
        }
    }
    return 0;
}
