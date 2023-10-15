#include <stdio.h>
#include <string.h>
int main()
{
    int t, n;
    char s[51], m[5] = "meow";
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        scanf("%s", s);
        strlwr(s);
        int count = 0, j = 0, flag;
        for (int i = 0; i < 4; i++)
        {
            flag = 0;
            while (j < n && m[i] == s[j])
            {

                j++;
                flag = 1;
            }
            if (flag)
            {
                count++;
            }
        }
        if (count == 4 && j == n && s[n - 1] == 'w')
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }

    return 0;
}
