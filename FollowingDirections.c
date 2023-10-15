#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char str[n];
        scanf("%s", str);
        int x = 0, y = 0;
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == 'U')
                y++;
            else if (str[i] == 'R')
                x++;
            else if (str[i] == 'D')
                y--;
            else
                x--;

            if (x == 1 && y == 1)
            {
                printf("YES\n");
                break;
            }
        }
        if (x != 1 || y != 1)
            printf("NO\n");
    }
}