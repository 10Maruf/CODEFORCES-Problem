/*maruf_bro*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <limits.h>

#define ll long long int

int main()
{
    ll t;
    scanf("%lld", &t);
    while (t--)
    {
        ll a, b, k;
        scanf("%lld%lld%lld", &a, &b, &k);
        ll pos = (k / 2);
        //  a=a*(k+1);
        //  b=;
        printf("%lld\n", (a * (pos + k % 2)) + (b * pos * -1));
    }
    return 0;
}
