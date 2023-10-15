#include <stdio.h>
#include <string.h>

int main()
{
    char string[101];
    scanf("%s", string);
    char hello[6] = "hello";
    int j = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == hello[j])
        {
            j++;
        }
        if (j == 5)
        {
            break;
        }
    }
    if (j == 5)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
