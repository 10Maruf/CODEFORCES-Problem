#include <stdio.h>
#include <string.h>
int main()
{
    int n, c = 0, max = 0;
    scanf("%d", &n);
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    for (int i = 1; i < n; i++)
    {
        if (ara[i] >= ara[i - 1])
        {

            c++;
        }
        else
            c = 0;
        if (max < c)
        {
            max = c;
        }
    }

    printf("%d", max+1);

    return 0;
}
