#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char vowel[7] = "aeiouy", string[101];
    scanf("%s", string);
    strlwr(string); // using lower case converting function
    for (int i = 0; i < strlen(string); i++)
    {
        int vtest=0;
        for (int j = 0; j < 6; j++)
        {
            if (string[i] != vowel[j])
            {
                continue;
            }

            else
                vtest++;
        }
        if (vtest == 0)
        {
            printf(".%c", string[i]);
        }
    }

    return 0;
}
