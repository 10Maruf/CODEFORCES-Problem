#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int n,anton=0,danik=0;
    char string[n];
    scanf("%d%s",&n,string);
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i]=='A')
        {
            anton++;
        }
        else danik++;
        
    }
    if (anton>danik)
    {
        printf("Anton");
    }
    else if (anton==danik)
    {
        printf("Friendship");
    }
    else printf("Danik");
    
    
    
    return 0;
}
