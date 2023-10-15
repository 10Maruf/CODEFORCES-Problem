#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char n[18];
    scanf("%s", n);
    int count = 0;
    for (int i = 0; i < strlen(n); i++)
    {
        if (n[i] == '4' || n[i] == '7')
        {
            count++;
        }
    }
    if (count == 4 || count == 7)
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}
