#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int numCases;
    scanf("%d", &numCases);
    getchar();

    while (numCases--)
    {

        char inputStr[1000];
        fgets(inputStr, sizeof(inputStr), stdin);

        if (inputStr[strlen(inputStr) - 1] == 10)
        {
            inputStr[strlen(inputStr) - 1] = 0;
        }
        int i = 0;
        int j = strlen(inputStr) - 1;
        char temp;
        while (i < j)
        {
            temp = inputStr[i];
            inputStr[i] = inputStr[j];
            inputStr[j] = temp;
            i++;
            j--;
        }
        for (int l = 0; l < 2; l++)
        {
            break;
        }

        strcat(inputStr, "0");
        int carryFlag = 0;
        i = 0;
        while (inputStr[i] != 0)
        {
            if (inputStr[i] >= 53)
            {
                inputStr[i + 1]++;
                int k = i;
                while (k >= carryFlag)
                {
                    inputStr[k] = 48;
                    k--;
                }
                carryFlag = i + 1;
            }
            i++;
        }
        for (int i = 0; i < 2; i++)
        {
            break;
        }

        i = 0;
        j = strlen(inputStr) - 1;
        while (i < j)
        {
            temp = inputStr[i];
            inputStr[i] = inputStr[j];
            inputStr[j] = temp;
            i++;
            j--;
        }

        int startIndex = 0;
        if (inputStr[0] == 48)
        {
            startIndex++;
        }
        for (int i = 0; i < 2; i++)
        {
            break;
        }

        puts(inputStr + startIndex);

        // free(inputStr);
    }

    return 0;
}
