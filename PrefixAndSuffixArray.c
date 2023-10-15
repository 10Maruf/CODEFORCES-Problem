#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a = 2 * n - 2;
        char s[a][n], s1[n];
        for (int i = 0; i < a; i++)
        {
            scanf("%s", s[i]);
        }
        for (int i = 0; i < a; i++)
        {
            for (int j = i + 1; j < a; j++)
            {
                if (strlen(s[i]) > strlen(s[j]))//sorting suffix and prefix
                {
                    strcpy(s1, s[i]);
                    strcpy(s[i], s[j]);
                    strcpy(s[j], s1);
                }
            }
        }
        char s2[n], s3[n];
        strcpy(s2, s[a - 2]);
        strcpy(s3, s[a - 1]);
        int b = strlen(s3);
        strrev(s3);
        if (strcmp(s2, s3) == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}