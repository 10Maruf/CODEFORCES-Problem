#include<stdio.h>
int main()
{
    int t, a, m;
    int num;
    int ai[18], sum = 1;
    scanf("%d", &t);
    while (t--)
    {
        num = 0;
        sum = 1;
        scanf("%d", &a);
        m = 0;
        while (a != 0)
        {
            ai[m++] = a % 10;
            a /= 10;
        }
        for (int i = 0; i < m; i++)
        {

            if (ai[i])
                num++;
        }
        printf("%d\n", num);
        for (int i = 0; i < m; i++)
        {
            if (ai[i] > 0)
            {

                printf("%d ", ai[i] * sum);
            }
            sum *= 10;
        }
        printf("\n");
    }
    return 0;
}
