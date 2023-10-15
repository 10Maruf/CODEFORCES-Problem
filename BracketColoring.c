#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                count++;
            else
                count--;
        }
        if (count != 0)
        {
            printf("-1\n");
            continue;
        }
        int c = 0;
        int zc = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                zc++;
            else
                zc--;
            if (zc < 0)
            {
                c++;
                break;
            }
        }
        zc = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ')')
                zc++;
            else
                zc--;
            if (zc < 0)
            {
                c++;
                break;
            }
        }
        if (c < 2)
        {
            printf("1\n");
            for (int i = 0; i < n; i++)
                printf("1 ");
            printf("\n");
        }
        else
        {
            int col[n];
            int i = 0;
            int j = n - 1;
            while (i < j)
            {
                if (s[i] == ')' && s[j] == ')')
                {
                    col[i++] = 2;
                    col[j--] = 1;
                }
                else if (s[i] == '(' && s[j] == '(')
                {
                    col[i++] = 1;
                    col[j--] = 2;
                }
                else if (s[i] == ')' && s[j] == '(')
                {
                    col[j--] = 2;
                    col[i++] = 2;
                }
                else
                {
                    col[i++] = 1;
                    col[j--] = 1;
                }
            }
            printf("2\n");
            for (int i = 0; i < n; i++)
                printf("%d ", col[i]);
            printf("\n");
        }
    }

    return 0;
}
