#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int arra[4], count = 0;
        // int max=arra[0];
        for (int i = 0; i < 4; i++)
        {
            scanf("%d", &arra[i]);
            if (arra[0] < arra[i])
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
