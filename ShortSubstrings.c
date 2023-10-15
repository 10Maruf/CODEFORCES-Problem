#include <stdio.h>

int main(void)
{
    long long t, i, j;
    char s[101], s2[101];

    scanf("%lld", &t);
    while (t--)
    {
        scanf("%s", s);
        s2[0] = s[0];
        s2[1] = s[1];

        for (i = 3, j = 2; s[i - 1] != '\0'; i = i + 2, j++)
        {

            s2[j] = s[i];
        }
        s2[j] = '\0';

        printf("%s", s2);
        printf("\n");
    }
    return 0;
}
