#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    char strk[27], strt[51]; // strk=keyboard order,strt=type order
    while (t--)
    {
        int sum1, sum = 0, sum2;
        scanf("%s%s", strk, strt);
        for (int i = 0; strt[i] != '\0'; i++)
        {
            for (int j = 0; j < 27; j++)
            {
                if (strt[i] == strk[j])
                {
                    if (i == 0)
                        sum2 = j;
                    sum1 = j;
                    sum = sum + abs(sum2 - sum1);
                    sum2 = j;
                }
            }
        }
        printf("%d\n", sum);
    }
}
