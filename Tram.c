#include <stdio.h>
int main(int argc, char const *argv[])
{
    int stops;
    scanf("%d", &stops);
    int exit[stops], enter[stops];
    for (int i = 0; i < stops; i++)
    {
        scanf("%d %d", &exit[i], &enter[i]);
    }
    for (int i = 1; i < stops; i++)
    {
        int temp = enter[i - 1] - exit[i];
        enter[i] = temp + enter[i];
    }
    int max = enter[0];
    for (int i = 1; i < stops; i++) // sorting
    {
        if (enter[i] > max)
        {
            max = enter[i];
        }
    }
    printf("%d", max);

    return 0;
}
