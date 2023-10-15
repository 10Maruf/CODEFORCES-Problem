#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int mini, maxi;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                mini = i;
            }
            if (arr[i] == n)
            {
                maxi = i;
            }
        }
        int s[3];
        if (maxi > mini)
        {
            s[0] = maxi + 1;            // left
            s[1] = n - mini;            // right
            s[2] = n + 1 + mini - maxi; // both
        }
        else
        {
            s[0] = mini + 1;
            s[1] = n - maxi;
            s[2] = n + 1 + maxi - mini;
        }
        int min = INT_MAX;
        for (int i = 0; i < 3; i++)
        {
            if (s[i] < min)
            {
                min = s[i];
            }
        }
        printf("%d\n", min);
    }
}