#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        if (k%2==0 && n%2==1)
        {
            puts("NO");
        }
        else puts("YES");
        
    }
    
    return 0;
}
