#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int t; // test case
    scanf("%d", &t);
    while (t--)
    {
        char word[100]; // for string
        scanf("%s", word);
        int word_length = strlen(word);
        if (word_length > 10)
        {
            printf("%c%d%c\n",word[0],word_length-2,word[word_length-1]);
        }
        else printf("%s\n",word);
    }

    return 0;
}
