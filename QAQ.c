#include <stdio.h>
#include <string.h>
int main()
{
    char myarray[1000];
    scanf("%s", &myarray);
    int i, cnt = 0, j, k, l, len = 0;
    len = strlen(myarray);
    for (i = 0; i < len; i++)
    {
        if (myarray[i] == 'Q')
        {
            for (j = i + 1; j < len; j++)
            {
                if (myarray[j] == 'A')
                {
                    for (l = j + 1; l < len; l++)
                    {
                        if (myarray[l] == 'Q')
                        {
                            cnt++;
                        }
                    }
                }
            }
        }
    }
    printf("%d", cnt);
    return 0;
}