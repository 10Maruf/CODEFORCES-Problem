#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, k, participants[51];
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &participants[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if ((participants[i] >= participants[k - 1]) && participants[i] != 0)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}