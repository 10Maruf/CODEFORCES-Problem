#include <stdio.h>
#include <string.h>
int main()
{
    int col, row;
    scanf("%d %d", &row, &col);
    for (int i = 1; i <= row; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= col; j++)
            {
                printf("#");
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= col; j++)
            {
                if (i % 4 == 2 && j == col)
                {
                    printf("#");
                }
                else if (i % 4 == 0 && j == 1)
                {
                    printf("#");
                }
                else
                {
                    printf(".");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
