#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{

    int tt;
    scanf("%d", &tt);
    while (tt--)
    {
        int numbers[3];
        for (int i = 0; i < 3; i++)
            scanf("%d", &numbers[i]);

        // Implementing sorting manually
        for (int i = 0; i < 2; i++)
        {
            for (int j = i + 1; j < 3; j++)
            {
                if (numbers[i] > numbers[j])
                {
                    int temp = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = temp;
                }
            }
        }

        if (!((numbers[1] + numbers[2]) >= 10))
            puts("NO");
        else
            puts("YES");
    }
    return 0;
}
