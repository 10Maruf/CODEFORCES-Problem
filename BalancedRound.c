#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(long long int *)a - *(long long int *)b);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int numElements, threshold;
        scanf("%lld %lld", &numElements, &threshold);
        long long int arr[numElements];
        for (long long int i = 0; i < numElements; i++)
            scanf("%lld", &arr[i]);

        // Using qsort for sorting the array
        qsort(arr, numElements, sizeof(long long int), compare);

        long long int i = 0;
        long long int maxConsecutive = 0;
        while (i < numElements)
        {
            long long int j = i + 1;
            while (j < numElements)
            {
                if (arr[j] - arr[j - 1] > threshold)
                {
                    break;
                }
                j++;
            }
            long long int consecutive = j - i;
            maxConsecutive = (maxConsecutive > consecutive) ? maxConsecutive : consecutive;
            i = j;
        }
        printf("%lld\n", numElements - maxConsecutive);
    }
    return 0;
}
