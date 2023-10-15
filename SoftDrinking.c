#include <stdio.h>
int main()
{

    int n, k, l, c, d, p, nl, np, j, i, m;
    scanf("%d%d%d%d%d%d%d%d", &n, &k, &l, &c, &d, &p, &nl, &np);
    j = (k * l) / nl;
    i = c * d;
    m = p / np;
    if (j < i && j < m)
    {
        printf("%d", j / n);
    }
    else if (i < j && i < m)
    {
        printf("%d", i / n);
    }
    else
        printf("%d", m / n);

    return 0;
}
