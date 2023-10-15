#include <stdio.h>
#include <string.h>
int main()
{
    int t, z = 0, n, i, j, s;
    char a[200], b[200];
    scanf("%d", &t);
    while (z < t)
    {
        scanf("%d", &n);
        scanf("%s", a);
        scanf("%s", b);
        for (i = 0; i < n; i++)
        {
            if (a[i] == 'B')
                a[i] = 'G';
            if (b[i] == 'B')
                b[i] = 'G';
        }
        s = strcmp(a, b);
        if (s == 0)
            printf("YES\n");
        else
            printf("NO\n");

        z++;
    }
}
