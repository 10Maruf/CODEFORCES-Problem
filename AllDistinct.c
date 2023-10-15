#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int k;
        scanf("%d", &k);
        int s[k];
        for (int j = 0; j < k; j++)
        {
            scanf("%d", &s[j]);
        }
        int flag = 0, sum = 0;
        for (int j = 0; j < k; j++)
        {
            for (int l = j + 1; l <= k; l++)
            {
                if (s[j] != s[l])
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            sum = sum + flag;
        }
        int len = k - sum;
        if (len % 2 == 0)
        {
            printf("%d\n", sum);
        }
        else
        {
            printf("%d\n", sum - 1);
        }
    }
    return 0;
}
