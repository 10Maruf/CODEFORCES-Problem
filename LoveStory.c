#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char str[11],*str2="codeforces";
        scanf("%s",str);
        int count=0;
        for (int i = 0; i < 10; i++)
        {
            if (str[i]==str2[i])
            {
                count++;
            }
            
        }
        printf("%d\n",10-count);
        
    }
    
    return 0;
}
