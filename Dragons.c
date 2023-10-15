#include <stdio.h>
int main()
{
    int n, s, i, win = 0, temp;

    scanf("%d %d", &s, &n);
    int x[n], y[n], j;
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (s > x[i])
        {
            s = s + y[i];
            win++;
        }
        else
        {
            for (j = i + 1; j < n; j++)
            {
                if (s > x[j])
                {
                    win++;
                    s = s + y[j];
                    temp = x[j];
                    x[j] = x[i];
                    x[i] = temp;
                    temp = y[j];
                    y[j] = y[i];
                    y[i] = temp;
                    break;
                }
            }
        }
    }
    if (win == n)
        printf("YES");
    else
        printf("NO");
}