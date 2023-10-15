#include <stdio.h>
int t;
long num[7];

int main()
{
    int i;
    scanf("%d", &t);
    while (t--)
    {
        for (i = 0; i < 7; i++)
            scanf("%ld", &num[i]);
        printf("%ld %ld ", num[0], num[1]);
        printf("%ld\n", (num[6] - num[0] - num[1]));
    }
    return 0;
}
