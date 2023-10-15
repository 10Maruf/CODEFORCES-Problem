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
        int x, count = 1;
        scanf("%d", &x);
        int key[5];

        for (int i = 1; i <= 3; i++)
        {
            scanf("%d", &key[i]);
        }

        for (int i = 1; i <= 3; i++)
        {
            if (key[x] != 0)
            {
                count++;
                x = key[x];
            }
            else
            {
                break;
            }
        }

        if (count == 3)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
