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
        char string[n + 1], copy[51]={0};//0 means NULL
        scanf("%s", string);
        for (int i = n - 1, j = 0; i >= 0;)
        {
            if (string[i] == '0')
            {
                copy[j] = (string[i - 2] - 48) * 10 + (string[i - 1] - 48) + 96;
                j++;
                i = i - 3;
            }
            else
            {
                copy[j] = string[i] - 48 + 96;
                j++;
                i--;
            }
        }
        printf("%s\n", strrev(copy));
    }
    return 0;
}
