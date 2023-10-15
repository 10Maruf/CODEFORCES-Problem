#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int calculateFlag(int long long n, int long long c_value, int long long *arr)
{
    int long long sum = 0, sum_of_squares = 0;
    for (int long long j = 0; j < n; j++)
    {
        sum += arr[j];
        sum_of_squares += arr[j] * arr[j];
    }

    sum /= 2 * n;
    c_value -= sum_of_squares;
    c_value = c_value / 4;
    c_value = c_value / n;
    int long long flag = sqrt(sum * sum + c_value);
    flag -= sum;
    return flag;
}
int compare(const void *a, const void *b)
int main()
{
    int long long test_cases;
    scanf("%lld", &test_cases);

    while (test_cases--)
    {
        int long long n, c_value;
        scanf("%lld %lld", &n, &c_value);

        int long long *arr = (int long long *)malloc(n * sizeof(int long long));
        for (int long long j = 0; j < n; j++)
        {
            int long long element;
            scanf("%lld", &element);
            arr[j] = element;
        }

        int long long flag = calculateFlag(n, c_value, arr);
        printf("%lld\n", flag);

        free(arr);
    }
    return 0;
}
int compare(const void *a, const void *b)
{
    return (*(long long int *)a - *(long long int *)b);
}