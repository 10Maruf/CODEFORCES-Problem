#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i;
        scanf("%d", &n);
        char str[n];
        scanf("%s", str);
        for (i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == 'U')
                str[i] = 'D';
            else if (str[i] == 'D')
                str[i] = 'U';
        }
        puts(str);
        }
    return 0;
}
