#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int __;
    scanf("%d", &__);
    while (__--)
    {
        long long size;
        scanf("%lld", &size);

        long long *arr = (long long *)malloc(size * sizeof(long long));
        for (long long i = 0; i < size; i++)
        {
            /* code */
            scanf("%lld", &arr[i]);
        }

        long long ans = arr[size - 1];
        for (long long k = 0; k < size - 1; k++)
        {
            if (arr[k] < 0 && arr[k + 1] > 0)
            {
                ans += arr[k];
                arr[k + 1] += arr[k];
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}
