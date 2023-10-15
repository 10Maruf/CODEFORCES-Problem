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
        int x;
        int freq[51] = {0};
        int i;
        for (i = 0; i < n * 2; i++)
        {
            scanf("%d", &x);
            freq[x]++;
            if (freq[x] - 1 == 0)
                printf("%d ", x);
        }
    }
    return 0;
}
