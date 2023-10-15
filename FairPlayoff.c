#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int s1, s2, s3, s4, win1, win2, lost1, lost2;

        scanf("%d%d%d%d", &s1, &s2, &s3, &s4);

        if (s1 > s2)
        {
            win1 = s1;
            lost1 = s2;
        }
        else
        {
            win1 = s2;
            lost1 = s1;
        }
        if (s3 > s4)
        {
            win2 = s3;
            lost2 = s4;
        }
        else
        {
            win2 = s4;
            lost2 = s3;
        }
        if (lost1 > win2 || lost2 > win1)
        {
            printf("NO\n");
        }
        else
            printf("YES\n");
    }
    return 0;
}
