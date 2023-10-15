#include <stdio.h>
int main(int argc, char const *argv[])
{
    int w; // watermelon weight
    scanf("%d", &w);
    if (w % 2 == 0 && w != 2) // all even numbers without 2. because 2 = 1 + 1
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}
