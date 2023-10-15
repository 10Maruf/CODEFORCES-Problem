#include <stdio.h>
int main(int argc, char const *argv[])
{
    int m, n, max_dominoes;
    scanf("%d%d", &m, &n);
    max_dominoes = m * n / 2;
    printf("%d", max_dominoes);
    return 0;
}
