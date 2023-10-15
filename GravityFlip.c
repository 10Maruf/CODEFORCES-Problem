#include <stdio.h>
int main()
{
    int n, temp;
    scanf("%d", &n);
    int box[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &box[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (box[i] > box[j])
            {
                temp = box[i];
                box[i] = box[j];
                box[j] = temp;
            }
        }
        printf("%d ", box[i]);
    }
}