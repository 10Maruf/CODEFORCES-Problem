#include <stdio.h>
int main(int argc, char const *argv[])
{
    long long int k, n, w;
    long long int brrw, total = 0;
    scanf("%lld%lld%lld", &k, &n, &w);
    for (int i = 1; i <= w; i++)
    {
        total = total + (k * i);
    }
    brrw = total - n;
    if (brrw < 0)
    {
        printf("0");
    }
    else
        printf("%lld", brrw);

    return 0;
}
