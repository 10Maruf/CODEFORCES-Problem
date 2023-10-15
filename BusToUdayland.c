#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int n;
    scanf("%d", &n);
    char arr[n][6];
    for (int i = 0; i < n; i++)
        scanf("%s", arr[i]);

    int replacementDone = 0;  // To keep track of replacement status

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 'O' && arr[i][j + 1] == 'O')
            {
                arr[i][j] = '+';
                arr[i][j + 1] = '+';
                replacementDone = 1;  // Mark that a replacement was done
                break;  // Exit the loop once a replacement is done
            }
        }

        if (replacementDone)
            break;  // Exit the loop once a replacement is done
    }

    if (replacementDone)
    {
        puts("YES");
        for (int i = 0; i < n; i++)
            puts(arr[i]);  // Use puts to print each row
    }
    else
    {
        puts("NO");
    }

    return 0;
}
