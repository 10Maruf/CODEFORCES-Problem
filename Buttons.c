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
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int p, q, r;
        scanf("%d%d%d", &p, &q, &r);
        if (p > q)
            puts("First");
        else if (p < q)
            puts("Second");
        else if (!(r%2==0))
            puts("First");
        else
            puts("Second");
    }
    return 0;
}
