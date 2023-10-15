#include<stdio.h>
int main()
{
    int n;//number of stones
    scanf("%d",&n);
    char color[n];
    scanf("%s",color);
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (color[i]==color[i+1])
        {
            count++;
        }
        
    }
    printf("%d",count);
    
    return 0;
}
