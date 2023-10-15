#include <stdio.h>
#include <string.h>
int main()
{
    int num[3], store[6], max = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num[i]);
    }
    store[0] = num[0] + num[1] * num[2];
    store[1] = num[0] * (num[1] + num[2]);
    store[2] = num[0] * num[1] * num[2];
    store[3] = (num[0] + num[1]) * num[2];
    store[4] = num[0] + num[1] + num[2];
    store[5] = (num[0] * num[1]) + num[2];
    for (int i = 0; i < 6; i++)
    {
        if (store[i] > max)
        {
            max = store[i];
        }
    }
    printf("%d", max);

    return 0;
}
