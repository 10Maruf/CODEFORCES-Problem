#include <stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int temp = n;
    for (int i = 0; i < 5; i++)
    {

        if (temp % 10 == 4 || temp % 10 == 7)
        {
            temp /= 10;
        }
        else
            break;
    }
    if (temp == 0 || n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 44 == 0 || n % 74 == 0)
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}
