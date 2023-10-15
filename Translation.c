#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char word[101], reverse[101];
    scanf("%s%s", word, reverse);
    strrev(word);// using string reverse function
    if (strcmp(word, reverse) == 0)
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}
