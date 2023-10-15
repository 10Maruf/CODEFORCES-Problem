#include <stdio.h>
#include <string.h>
    
    int main()
    {
        int n, i, max = 0, min = 101, max_index, min_index;
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] > max)
            {
                max = a[i];
                max_index = i;
            }
            if (a[i] <= min)
            {
                min = a[i];
                min_index = i;
            }
        }
        if (max_index > min_index)
        {
            min_index++;
        }
        printf("%d", (max_index + (n - 1) - min_index));

        return 0;
    }
