#include <stdio.h>
#include <limits.h>

int main()
{
    int t;
    scanf("%d", &t);
    
    while (t--)
    {
        int n;
        scanf("%d", &n);
        
        int minValue = INT_MAX;
        int maxValue = INT_MIN;
        int hasNegative = 0;
        
        for (int i = 0; i < n; i++)
        {
            int num;
            scanf("%d", &num);
            
            if (num < 0)
            {
                hasNegative = 1;
                if (num < minValue)
                    minValue = num;
            }
            else
            {
                if (num > maxValue)
                    maxValue = num;
            }
        }
        
        if (hasNegative)
            printf("%d\n", minValue);
        else
            printf("%d\n", maxValue);
    }
    
    return 0;
}
