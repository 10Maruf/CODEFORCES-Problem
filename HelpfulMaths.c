#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char s[101];
    int temp;
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i = i + 2)
    {
        for (int j = i + 2; j < strlen(s); j = j + 2)
        {
            if (s[i] > s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("%s", s);
    return 0;
}
