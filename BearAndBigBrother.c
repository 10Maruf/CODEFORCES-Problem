#include <stdio.h>
int main(int argc, char const *argv[])
{
    int limak, bob;
    scanf("%d%d", &limak, &bob);
    for (int i = 1;; i++)
    {
        if (limak <= bob)
        {
            limak = limak * 3;
            bob = bob * 2;
        }
        else
        {
            printf("%d", i-1);
            break;
        }
    }

    return 0;
}
