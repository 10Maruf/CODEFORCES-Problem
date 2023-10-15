#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char str[n];
        scanf("%s", str);
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] > max)
            {
                max = str[i];
            }
        }
        printf("%d\n", max - 97 + 1);
    }

    return 0;
}