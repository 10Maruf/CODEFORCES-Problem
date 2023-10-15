#include <stdio.h>
int main()
{
    int n, drink[101];
    double sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &drink[i]);
        sum += drink[i];
    }
    printf("%.12f", sum / (float)n);

    return 0;
}
