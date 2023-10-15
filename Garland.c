#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char l[5];
        scanf("%s", l);
        int count = 0, flag = 0;
        for (int i = 0; i < 4; i++)
        {
            for (int j = i + 1; j < 4; j++)
            {
                if (l[i] == l[j])
                {

                    flag++;
                }
            }
            if (flag > count)
            {
                count = flag;
            }
            flag=0;
        }
        if (count == 3)
        {
            printf("-1\n");
        }
        else if (count == 2)
        {
            printf("6\n");
        }
        else
            printf("4\n");
    }

    return 0;
}
