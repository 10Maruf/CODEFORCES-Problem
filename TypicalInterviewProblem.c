#include <stdio.h>
#include <string.h>
int main(void)
{
    int t;

    scanf("%d", &t);
    char FB[21] = "FBFFBFFBFBFFBFFBFBFF";
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char str[n + 1];

        scanf("%s", str);

        if (strstr(FB, str) != NULL)//using substring compare function
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
