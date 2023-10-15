#include <stdio.h>
int main()
{
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--)
    {
        long int n, sum_even = 0, sum_odd = 0;
        scanf("%ld", &n);
        if (n == 2 || ((n / 2) % 2 == 1))
            printf("NO\n");
        else
        {
            printf("YES\n");
            for (long int i = 1; i <= (n / 2); i++)
            {
                printf("%ld ", 2 * i);
                sum_even += 2 * i;
            }
            for (long int i = 1; i < (n / 2); i++)
            {
                printf("%ld ", 2 * i - 1);
                sum_odd += 2 * i - 1;
            }
            printf("%ld\n", sum_even - sum_odd);
        }
    }
}