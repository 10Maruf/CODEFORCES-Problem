#include <stdio.h>
#include <string.h>
int main()
{
    int n, flag, count = 0;
    scanf("%d", &n);
    char string[n + 1];
    scanf("%s", string);
    strlwr(string);
    if (n < 26)
    {
        printf("NO");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (string[i] == string[j])
                    string[j] = '*';
            }
        }
        for (int k = 0; k < n; k++)
        {
            if (string[k] != '*')
                count++;
        }
        if (count == 26)
            printf("YES");
        else
            printf("NO");
        return 0;
    }
    return 0;
}
