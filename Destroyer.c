// maruf_bro
// maruf_bro
// maruf_bro
// maruf_bro
// maruf_bro
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, nn;
        int max = 0, flag = 0;
        scanf("%d", &n);
// maruf_bro
// maruf_bro
// maruf_bro
// maruf_bro
// maruf_bro
// maruf_bro
        int ara[101] = {0};
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &nn);
            max = (nn > max) ? nn : max;
            ara[nn]++;
        }
        for (int i = 1; i <= max; i++)
        {
            if (ara[i - 1] < ara[i])
            {
                puts("NO");
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            puts("YES");
        }
// maruf_bro
// maruf_bro
// maruf_bro
    }
    return 0;
}
// maruf_bro