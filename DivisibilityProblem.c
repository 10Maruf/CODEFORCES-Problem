#include <stdio.h>
int main()
{
    int t, c;
    scanf("%d", &t);
    while(t--)
    {
        long long int a, b;
        scanf("%lld %lld", &a, &b);
        if (a % b == 0)
        {
            printf("0\n");
        }
        else
        {
            int temp = a % b;
            int c = (b - temp);
            printf("%d\n", c);
        }
    }

    return 0;
}