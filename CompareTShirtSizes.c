#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s1[55], s2[55];
        scanf("%s %s", s1, s2);

        char chr1 = s1[strlen(s1) - 1];
        char chr2 = s2[strlen(s2) - 1];

        int result;

        if (chr1 == chr2)
        {
            int size1 = strlen(s1);
            int size2 = strlen(s2);

            if (chr1 == 'S')
            {
                result = size2 - size1;
            }
            else
            {
                result = size1 - size2;
            }
        }
        else
        {
            if ((chr1 == 'L' && chr2 == 'M') || (chr1 == 'L' && chr2 == 'S') || (chr1 == 'M' && chr2 == 'S'))
            {
                result = 1;
            }
            else
            {
                result = -1;
            }
        }

        if (result == 0)
        {
            puts("=");
        }
        else if (result > 0)
        {
            puts(">");
        }
        else
        {
            puts("<");
        }
    }

    return 0;
}
