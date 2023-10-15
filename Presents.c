#include <stdio.h>
int main()
{
    int n, friends[101], output[101];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &friends[i]);
        output[(friends[i] - 1)] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", output[i]);
    }

    return 0;
}
