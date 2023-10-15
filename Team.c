#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, // number of problem in the contest
        count = 0,// for count
        ara[3]; // store solution
    scanf("%d",&n);
    
    while (n--)
    {

        for (int i = 0; i < 3; i++)
        {
            scanf("%d",&ara[i]);
        }
        if ((ara[0] == 1 && ara[1] == 1) || (ara[1] == 1 && ara[2] == 1) || (ara[0] == 1 && ara[2] == 1))
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
