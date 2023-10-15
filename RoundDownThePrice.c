#include <stdio.h>
int main()
{
    long long t, round, num;
    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld", &num);
        round = 1;
        while (round <= num)
        {
            round = round * 10;
        }
        round = round / 10;
        printf("%lld\n", num - round);
    }
    return 0;
}
