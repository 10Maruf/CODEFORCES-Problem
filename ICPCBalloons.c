#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, flag = 1, count = 0, count2 = 0;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", &s);
        for (int i = 0; i < n; i++)
        {
            flag = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (s[i] == s[j])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0)
            {
                count++;
            }
            else
            {
                count2++;
            }
        }
        printf("%d\n", count2 * 2 + count);
    }

    return 0;
}
