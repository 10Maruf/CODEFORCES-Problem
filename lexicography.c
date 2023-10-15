#include <stdio.h>
#include <string.h>
int main()
{
    long long int t;//***********************not solved
    scanf("%lld", &t);
    char s[1000000];
    while (t--)
    {
        scanf("%s", s);
        long long int len = strlen(s);
        for (int i = 0; i < len; i++)
        {
            if (s[i] <= s[i + 1])
            {
                char temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
            }
        }
        printf("%s\n", s);
    }

    return 0;
}
