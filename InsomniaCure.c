#include <stdio.h>
#include <string.h>
int main()
{
    int k, l, m, n, d, unharmed_dragon = 0;
    scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);
    for (int i = 1; i <= d; i++)
    {
        if ((i % k == 0) || (i % l == 0) || (i % m == 0) || (i % n == 0))
        {
            unharmed_dragon++;
        }
    }
    printf("%d", unharmed_dragon);
}