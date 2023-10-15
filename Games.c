#include <stdio.h>
#include <string.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int teams[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &teams[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (teams[i][0] == teams[j][1])
                count++;
        }
    }
    printf("%d", count);
    return 0;
}