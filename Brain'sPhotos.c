#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100][100];
    int a, b, i, j, c = 0;

    scanf("%d %d", &a, &b);
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%s", &arr[i][j]);
        }
    }
    for (i = 0; i < a; i++)
    {

        for (j = 0; j < b; j++)
        {

            if (arr[i][j] == 'C' || arr[i][j] == 'M' || arr[i][j] == 'Y')
            {

                c++;
            }
        }
    }
    if (c != 0)
        printf("#Color");
    else
        printf("#Black&White");
}
