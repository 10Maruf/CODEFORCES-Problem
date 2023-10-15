#include <stdio.h>
int lucky(int x)
{
    int max = 0, min = 9;
    while (x)
    {
        int n;
        n = x % 10;
        max = max > n ? max : n;
        min = min < n ? min : n;//conditional operator
        x /= 10;
    }
    return max - min;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        int m = 0, final_lucky;
        for (int j = a; j <= b; j++)
        {
            if (lucky(j) >= m)
            {
                final_lucky = j;
                m = lucky(j);
            }
            if (m == 9)
                break;
        }
        printf("%d\n", final_lucky);
    }
    return 0;
}
