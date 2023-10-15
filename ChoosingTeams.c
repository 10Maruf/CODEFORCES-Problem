#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a, count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a);
        if (a + k <= 5)
        {
            count++;
        }
    }

    printf("%d", count / 3);
}
