#include <stdio.h>
#include <string.h>
int main()
{
    char num1[101], num2[101], store[101];
    scanf("%s%s", num1, num2);
    for (int i = 0; i < strlen(num1); i++)
    {
        if (num1[i] == num2[i] && num1[i] != 0)
        {
            store[i] = '0';
        }
        else
        {
            store[i] = '1';
        }
    }
    store[strlen(num1)] = '\0'; // Add null character at the end of store
    printf("%s", store);
    return 0;
}
