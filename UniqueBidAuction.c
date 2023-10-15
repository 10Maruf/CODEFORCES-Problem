#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int  t, element, index[200000];
    scanf("%d", &t);
    while (t--)
    {
        int ans = -1, max = 0,n;
        scanf("%d", &n);
        int freq[n];
            for (int i = 0; i < n; i++)
            {
                freq[i]=0;
            }
            
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &element);
            freq[element - 1]++;
            index[element - 1] = i + 1;
        }
        for (int i = 0; i < n; i++)
        {
            if (freq[i] == 1)
            {
                ans = index[i];
                break;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
