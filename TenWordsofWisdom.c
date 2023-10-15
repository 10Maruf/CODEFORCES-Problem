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
        int maxQuality = 0, ansIndex = 0;
        for (int i = 1; i <= n; i++)
        {
            int words, quality;
            scanf("%d %d", &words, &quality);
            if (words < 11)
            {
                if (quality > maxQuality)//find max m_b
                {
                    maxQuality = quality;
                    ansIndex = i;
                }
            }
        }
        printf("%d\n", ansIndex);
    }
    return 0;
}
