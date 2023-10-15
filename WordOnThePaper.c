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
        char ch;
        char grid[100] = {0};

        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                scanf(" %c", &ch);
                if (ch != '.')
                    strncat(grid, &ch, 1);
            }
        }

        puts(grid);
    }
    return 0;
}
