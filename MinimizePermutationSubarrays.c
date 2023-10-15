#include <stdio.h>


int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
         int n, ek, dui, beshi = 0;
    scanf("%d", &n);
    int v[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
        if (v[i] == 1)
        {
            ek = i + 1;
        }
        else if (v[i] == 2)
        {
            dui = i + 1;
        }
        if (v[beshi] < v[i])
        {
            beshi = i;
        }
    }
    beshi++;
    if (ek < beshi && dui < beshi)
    {
        if (ek > dui)
            printf("%d %d\n", ek, beshi);
        else
            printf("%d %d\n", dui, beshi);
    }
    else if (ek > beshi && dui > beshi)
    {
        if (ek > dui)
            printf("%d %d\n", dui, beshi);
        else
            printf("%d %d\n", ek, beshi);
    }
    else
        printf("%d %d\n", n, n);
    }
    return 0;
}
