#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, n, ones;
    char s[200000];

    scanf("%d\n%s", &n, s);

    for (i = 0; i < n; i++)
    {
        if (s[i] == '1')
            ones++;
    }

    printf("%d\n", abs(n - 2 * ones));

    return 0;
}
