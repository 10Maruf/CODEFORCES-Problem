#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char str[51];
        scanf("%s", str);
        int len = strlen(str);
        int count = 0;
        int freq[26] = {0};
        int distinct = 0;
        for (int i = 0; i < len; i++)
            freq[str[i] - 'a']++;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] == 1)
                count++;
            else if (freq[i] > 1)
                distinct++;
        }
        printf("%d\n", distinct + (count / 2));
    }
    return 0;
}
