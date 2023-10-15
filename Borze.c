#include <stdio.h>
#include <string.h>
int main()
{
    char borze[201];
    scanf("%s", borze);
    char store[strlen(borze)];
    int j = 0;
    for (int i = 0; i < strlen(borze); i++, j++)
    {
        if (borze[i] == '.')
        {
            store[j] = '0';
        }
        else if (borze[i] == '-' && borze[i + 1] == '.')
        {
            store[j] = '1';
            i++;
        }
        else
        {
            store[j] = '2';
            i++;
        }
    }
    store[j] = '\0';
    printf("%s", store);

    return 0;
}