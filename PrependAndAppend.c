#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char s[n];
        int x = n;
        scanf("%s", s);
        for (int i = 0; i < n / 2; i++)
        {
            if ((s[i] == '0' && s[n - i - 1] == '1') || (s[i] == '1' && s[n - i - 1] == '0'))
            {
                x = x - 2;
            }
            else
            {
                break;
            }
        }
        printf("%d\n", x);
    }
    return 0;
}