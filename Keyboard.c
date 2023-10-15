#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    char keyboard[] = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char s;
    scanf("%c", &s);
    char message[101];
    scanf("%s", message);
    for (int i = 0; message[i] != '\0'; i++)
    {
        for (int j = 0; keyboard[j] != '\0'; j++)
        {
            if (s == 'R')
            {
                if (message[i] == keyboard[j])
                    printf("%c", keyboard[j - 1]);
            }
            else
            {
                if (message[i] == keyboard[j])
                    printf("%c", keyboard[j + 1]);
            }
        }
    }
    return 0;
}
