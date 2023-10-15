#include <stdio.h>
#include <string.h>

int main()
{
    int n, x = 1, remove = 0;
    scanf("%d", &n);
    char a[n];
    scanf("%s", &a);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'x' && a[i + 1] == 'x')
        {
            x++;
        }
        else
        {
            if (x >= 3)
            {
                remove = remove + x - 2;
            }
            x = 1;
        }
    }
    printf("%d\n", remove);

    return 0;
}