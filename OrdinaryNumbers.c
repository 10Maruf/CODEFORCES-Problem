#include <stdio.h>

int main()
{

    int t, n, i, j, flag;
    long long a;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        flag = 0;
        for (int i = 1; i <= 9; i++)
        {
            a = i;
            while (n >= a)
            {
                flag++;
                a = a * 10 + i;
            }
        }
        printf("%d\n", flag);
    }
    return 0;
}