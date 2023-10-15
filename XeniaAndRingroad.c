#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    long long n, m;
    scanf("%lld%lld",&n,&m);
    long long initial = 1;

    long long time = 0;

    for (long long i = 0; i < m; i++)
    {
        long long present;
        scanf("%lld",&present);

        if (present >= initial)
        {
            time += present - initial;
        }
        else
        {
            time += n - (initial - present);
        }
        initial = present;
    }
    printf("%lld",time);
    return 0;
}
