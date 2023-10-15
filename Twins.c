#include <stdio.h>
int main()
{
    int n, coin[102], sum = 0, sum2 = 0, count = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &coin[i]);
        sum += coin[i];
    }
    // sorting of array
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (coin[i] < coin[j])
            {
                int temp = coin[i];
                coin[i] = coin[j];
                coin[j] = temp;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        sum2 += coin[i];
        count++;
        if (sum2 > sum / 2)
        {
            break;
        }
    }
    printf("%d", count);

    return 0;
}
