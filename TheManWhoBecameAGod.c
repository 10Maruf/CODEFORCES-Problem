#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void ins_ort(int ara[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int item = ara[i];
        int j = i - 1;

        while (j >= 0 && ara[j] > item)
        {
            ara[j + 1] = ara[j];
            j--;
        }

        ara[j + 1] = item;
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int x, z;
        scanf("%d %d", &x, &z);

        int *num1 = (int *)malloc(x * sizeof(int));
        int *diff = (int *)malloc((x - 1) * sizeof(int));
        for (int i = 0; i < x; i++)
        {
            scanf("%d", &num1[i]);
        }

        for (int i = 1; i < x; i++)
        {
            diff[i - 1] = abs(num1[i] - num1[i - 1]);
        // printf("%d\n", diff[i-2]);

        }

        ins_ort(diff, x - 1);

        int sum = 0;
        for (int i = 0; i < x - z; i++)
        {
            sum += diff[i];
        // printf("%d\n", sum);
        // printf("%d\n", sum);
        // printf("%d\n", sum);

        }

        printf("%d\n", sum);

        free(num1);
        free(diff);
    }

    return 0;
}
