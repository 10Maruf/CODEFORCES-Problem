#include <stdio.h>
int main()//****************not solved
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l, r, size = 0, set = 0, j=0, i;
        scanf("%d%d", &l, &r);
        int p=l;
        for (int i = l; i <= r; i *= 2)
        {
            size++;
        }
        for (i = l; i <= r; i++)
        {
            
            
            for (j = 1; j < size; j++)
            {
                p = p * 2;
                if ((p > r) && j == size-1)
                {
                    set++;
                    break;
                }
            }
            if (j<size-1)
            {
                continue;
            }
            
        }

        printf("%d %d\n", size, set);
    }

    return 0;
}
