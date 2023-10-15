#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int t;
   scanf("%d",&t);
   int n;
   int a[51];
   while(t--)
   {
       scanf("%d",&n);
       for(int i=0;i<n;i++)
       {
          scanf("%d",&a[i]); 
       }
       
       int flag=1;
       for(int i=2;i<n;i++)
       {
           if(a[i-2]%2!=a[i]%2)
           {
               flag=0;
           }
       }
       
       if(flag==0)
       {
           puts("NO");
       }
       else
       {
           puts("YES");
       }
       
   }
    return 0;
}
