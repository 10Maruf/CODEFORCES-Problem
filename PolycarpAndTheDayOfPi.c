#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char str1[] = "314159265358979323846264338327";
        char str2[31];
        scanf("%s", str2);
        int c = 0;
        for (int i = 0; i < strlen(str2); i++)
        {
            if (str1[i] == str2[i])
                c++;
            else
                break;
        }
        printf("%d\n", c);
    }
}
