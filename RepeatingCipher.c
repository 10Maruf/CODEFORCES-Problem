#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int n;
    scanf("%d", &n);
    char string[n];
    scanf("%s", string);
    for (int i = 0, j = 0; j < n; i++, j += i)
    {
        printf("%c", string[j]);
    }
    return 0;
}
