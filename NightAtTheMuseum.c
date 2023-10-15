#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int min(int n1, int n2);
int main()
{
    char str[100];
    scanf("%s", str);
    int l = strlen(str);
    int steps = 0;
    char point = 'a';
    for (int i = 0; i < l; i++)
    {
        int o = min(abs(str[i] - point), 26 - (abs(str[i] - point)));
        point = str[i];
        steps = steps + o;
    }
    printf("%d", steps);
}
int min(int n1, int n2)
{
    if (n1 <= n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}
