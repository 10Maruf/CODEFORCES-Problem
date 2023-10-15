#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char str[n + 1];
        scanf("%s", str);
        int count = 1, max = 1;
        for (int i = 1; i < n; i++)
        {
            if (str[i] == str[i - 1])
            {
                count++;
            }
            else
            {
                max = (count > max) ? count : max;
                count = 1;
            }
        }
        max = (count > max) ? count : max;
        printf("%d\n", max + 1);
    }
    return 0;
}
