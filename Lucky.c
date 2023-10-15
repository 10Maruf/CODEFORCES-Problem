#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char num[6];
        scanf("%s", num);
        if (num[0] + num[1] + num[2] == num[3] + num[4] + num[5])
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}