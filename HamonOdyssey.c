#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int *array = (int *)malloc(n * sizeof(int));

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &array[j]);
        }

        int numBits = log2(1000000000) + 1;
        int uprlmt = (1 << numBits) - 1;

        int lwrlmt = uprlmt;
        for (int i = 0; i < n; i++)
        {
            lwrlmt = lwrlmt & array[i];
        }

        int final = 0;
        // printf("%d\n", final);

        int flag = uprlmt;

        for (int i = 0; i < n; i++)
        {
            flag = flag & array[i];
            if (flag == 0)
            {
                final = final + 1;
                flag = uprlmt;
                // printf("%d\n", final);
                // printf("%d\n", final);
            }
        }

        final += lwrlmt > 0;
        printf("%d\n", final);

        free(array);
    }

    return 0;
}
