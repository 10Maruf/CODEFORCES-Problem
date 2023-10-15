#include <stdio.h>

void solve()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int sub = 0;
    if (a == b)
        printf("0\n");
    if (a > b)
        sub = a - b;
    else
        sub = b - a;
    if ((a > b) && (sub % 2 == 0))
        printf("1\n");
    else if ((a > b) && (sub % 2 == 1))
        printf("2\n");
    else if ((a < b) && (sub % 2 == 0))
        printf("2\n");
    else if ((a < b) && (sub % 2 == 1))
        printf("1\n");
}

int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        solve();
    }
}