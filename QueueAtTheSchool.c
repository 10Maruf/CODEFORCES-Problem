#include <stdio.h>
int main()
{
    int n, t;
    scanf("%d%d", &n, &t);
    char string[51];
    scanf("%s", string);
    while (t--)
    {
        for (int i = 1; i < n; i++)
        {
            if (string[i-1]=='B'&&string[i]=='G')
            {
                string[i]='B';
                string[i-1]='G';
                i++;
            }
            
        }
    }
    printf("%s", string);

    return 0;
}
