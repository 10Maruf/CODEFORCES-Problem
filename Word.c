#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char word[101];
    int lwr_case=0,uppr_case=0;
    scanf("%s",word);
    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i]>='a'&&word[i]<='z')
        {
            lwr_case++;
        }
        else uppr_case++;
        
    }
    if (lwr_case>=uppr_case)
    {
        strlwr(word);//using lowercase converter function
        printf("%s",word);
    }
    else
    {
        strupr(word);//using uppercase converter function
        printf("%s",word);
    }
    
    
    
    return 0;
}
