#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a;
        scanf("%d", &a);
        printf("%d %d\n", (a - 1) / 2, (a - 1));
    }
}