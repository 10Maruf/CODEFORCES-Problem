#include <stdio.h>
int main()
{
    int ara[4];
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &ara[i]);
    }

    // scanf("%d%d%d%d", &ara[0], &ara[1], &ara[2], &ara[3]);
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (ara[i] == ara[j] && ara[j] != 0)
            {
                count++;
                ara[j] = 0;
            }
        }
    }
    printf("%d", count);

    return 0;
}
