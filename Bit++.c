#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int n, X = 0;
    char stmnt[4]; // for statement
    scanf("%d", &n);
    
    while (n--)
    {
        scanf("%s", stmnt);
        
        if ((!strcmp(stmnt, "X++")) || (!strcmp(stmnt, "++X")))
        {
            X++;
        }
        else X--;
            
    }
    printf("%d",X);

    return 0;
}
