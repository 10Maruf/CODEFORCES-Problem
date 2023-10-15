#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int k = 1; k <= n; k++)
    {
        char c[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                scanf(" %c", &c[i][j]);
            }
        }

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (c[i][j] == '#' && c[i - 1][j - 1] == '#' && c[i - 1][j + 1] == '#' && c[i + 1][j - 1] == '#' && c[i + 1][j + 1] == '#')
                {
                    printf("%d %d\n", (i + 1), (j + 1));
                }
            }
        }
    }
}