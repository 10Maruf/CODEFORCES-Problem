#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char yes[4];
    scanf("%s",yes);
    
    if (strcmp("yes",strlwr(yes))==0)
    {
        printf("YES\n");
    }
    else printf("NO\n");
    
    }
    
    return 0;
}
