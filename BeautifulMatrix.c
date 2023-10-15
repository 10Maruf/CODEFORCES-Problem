#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int matrix[5][5], i, j,move;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 1)
            {
                move = abs(i - 2) + abs(j - 2); // using absolute function
            }
        }
    }
    printf("%d",move);

    return 0;
}
