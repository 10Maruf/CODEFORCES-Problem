#include <stdio.h>
int main()
{
    int friends, fence_height, friends_height[1001], width = 0;
    scanf("%d%d", &friends, &fence_height);
    for (int i = 0; i < friends; i++)
    {
        scanf("%d", &friends_height[i]);
        if (friends_height[i] > fence_height)
        {
            width += 2;
        }
        else
            width++;
    }
    printf("%d", width);

    return 0;
}
