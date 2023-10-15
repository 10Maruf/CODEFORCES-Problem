#include <stdio.h>// maruf_bro// maruf_bro

int main()
{
    int test;
    scanf("%d", &test);// maruf_bro// maruf_bro// maruf_bro// maruf_bro// maruf_bro// maruf_bro// maruf_bro
    while (test--)
    {
        long long int b, a, f,temp2;
        scanf("%lld %lld %lld", &a, &b, &f);
        long long int temp3=f * b - (((f + 1) / 2) - 1) * a;
        if (temp3 < 0)
        {
            temp2=f*b;
            printf("%lld\n", temp2);
            continue;
        }
       long long int temp= f * b - ((((f * b - (((f + 1) / 2) - 1) * a + f - 1) / f) * f));
        printf("%lld\n", temp);
    }

    return 0;
}
// maruf_bro// maruf_bro// maruf_bro// maruf_bro