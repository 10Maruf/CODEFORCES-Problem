#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a;
        scanf("%d", &a);

        printf("%s\n", a < 5 ? "Bob" : "Alice");
    }

    return 0;
}
