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
        printf("%d ", n);
        for (int i = 1; i < n; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
