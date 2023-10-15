#include <stdio.h>
#include <string.h>
int main()
{
    char c[101];
    int i, count = 0;
    gets(c);
    for (i = 0; i < strlen(c); i++)
    {
        if (c[i] == 'H' || c[i] == 'Q' || c[i] == '9')
            count++;
    }
    if (count == 0)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}
