#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char str[n];
        scanf("%s", str);

        if (n == 1)
        {
            puts("YES");
        }

        else if (n == 2)
        {
            if (str[0] == str[1])

                puts("NO");
            else
                puts("YES");
        }

        else
            puts("NO");
    }
    return 0;
}
