#include <stdio.h>

int t, N, M, a, b, c, d, ans;

int main()
{
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d%d%d%d%d", &N, &M, &a, &b, &c, &d);
        if (((a == 1 || a == N) && (b == 1 || b == M)) || ((c == 1 || c == N) && (d == 1 || d == M)))
            ans = 2;
        else if (a == 1 || b == 1 || a == N || b == M || c == 1 || d == 1 || c == N || d == M)
            ans = 3;
        else
            ans = 4;
        printf("%d\n", ans);
    }

    return 0;
}
