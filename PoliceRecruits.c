#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], p = 0, c = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
        {
            p += arr[i];
        }
        else
        {
            if (p == 0)
            {
                c++;
            }
            else
            {
                p = p - 1;
            }
        }
    }
    printf("%d", c);

    return 0;
}