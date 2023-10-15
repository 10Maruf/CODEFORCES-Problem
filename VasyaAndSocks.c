#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int i = 1;
    while (m * i <= n)
    {
        n++;
        i++;
    }
    printf("%d", n);

    return 0;
}
