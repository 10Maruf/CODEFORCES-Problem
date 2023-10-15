#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int i, j, k, l, m, c1 = 0, c2 = 0;
    scanf("%d", &k);
    char s[k + 2], a, b;
    scanf("%s", s);

    for (i = 0; i < k; i++)
    {
        c2 = 0;
        for (j = 0; j < k; j++)
        {
            if (s[i] == s[j] && s[i + 1] == s[j + 1])//ABACABA
            {
                c2++;
                if (c1 < c2)
                {
                    c1 = c2;
                    a = s[i];
                    b = s[i + 1];
                }
            }
        }
    }
    printf("%c%c\n", a, b);
    return 0;
}
/*#include <stdio.h>
#include <string.h>

int main()
{
    int i, k, maxCount = 0;
    scanf("%d", &k);
    char s[k + 2], maxPair[3];
    scanf("%s", s);

    for (i = 0; i < k - 1; i++)
    {
        int count = 0;
        char currentPair[3];
        strncpy(currentPair, s + i, 2);
        currentPair[2] = '\0';

        for (int j = 0; j < k - 1; j++)
        {
            char tempPair[3];
            strncpy(tempPair, s + j, 2);
            tempPair[2] = '\0';

            if (strcmp(currentPair, tempPair) == 0)
            {
                count++;
            }
        }

        if (count > maxCount)
        {
            maxCount = count;
            strncpy(maxPair, currentPair, 3);
        }
    }

    printf("%s\n", maxPair);
    return 0;
}
*/