#include <stdio.h>
#include <string.h>
int main()
{
    char string1[205], string2[105], string3[102], temp, t;
    scanf("%s", string1);
    scanf("%s", string2);
    scanf("%s", string3);
    strcat(string1, string2);
    int n = strlen(string1);
    int l = strlen(string3);
    for (int i = 0; i < n; i++) // first + second = string1; string sort
    {
        for (int j = 0; j < n; j++)
        {
            if (string1[i] < string1[j])
            {
                temp = string1[i];
                string1[i] = string1[j];
                string1[j] = temp;
            }
        }
    }
    for (int i = 0; i < l; i++) // last string sort
    {
        for (int j = 0; j < l; j++)
        {
            if (string3[i] < string3[j])
            {
                t = string3[i];
                string3[i] = string3[j];
                string3[j] = t;
            }
        }
    }

    int m = strcmp(string1, string3);
    if (m == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
