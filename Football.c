#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char player[101];
    int count = 1;
    scanf("%s", player);
    for (int i = 1; i < strlen(player); i++)
    {
        if ((player[i] == player[i - 1]))
        {
            count++;
        }

        else if (count >= 7)
        {
            break;
        }
        else if ((player[i] != player[i - 1]))
        {
            count = 1;
           
        }
    }
    if (count >= 7)
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}
