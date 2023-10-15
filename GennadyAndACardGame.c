#include <stdio.h>
#include <string.h>
int main()
{
    int flag = 0;
    char table[2];
    scanf("%s", table);
    for (int i = 0; i < 5; i++)
    {
        char hand[2];
        scanf("%s", hand);
        if (hand[0] == table[0] || hand[1] == table[1])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
