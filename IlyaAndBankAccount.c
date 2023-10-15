#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    char num[15];
    scanf("%s", num);
    int l = strlen(num);
    if (l==3&&num[0]=='-'&&(num[l-1]=='0'||num[l-2]=='0'))
    {
        puts("0");
    }
    
   else if (num[0] == '-')
    {

        for (int i = 0; i < l; i++)
        {
            if (i == l - 2 && num[l - 1] < num[l - 2])
            {
                i++;
            }
            else if (i == l - 1 && num[l - 1] >= num[l - 2])
            {
                continue;
            }
            printf("%c", num[i]);
        }
    }
    else
    {

        printf("%s", num);
    }

    return 0;
}
