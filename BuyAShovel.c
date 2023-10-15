#include <stdio.h>
#include <string.h>
int main()
{
    int s_p, ex, count = 1;
    scanf("%d%d", &s_p, &ex);
    for (int i = 1;; i++)
    {
        int sum = 0;
        sum += i * s_p;
        if ((sum - ex) % 10 == 0 || sum % 10 == 0)
        {
            break;
        }
        else
            count++;
    }
    printf("%d", count);

    return 0;
}
