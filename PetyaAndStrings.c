#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char string1[101], string2[101];
    scanf("%s", &string1);
    scanf("%s", &string2);
    int output = strcasecmp(string1, string2); // string compare function without case sensitivity
        
         printf("%d",output);
        
    return 0;
}
