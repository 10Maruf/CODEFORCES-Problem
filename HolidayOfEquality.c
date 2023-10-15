#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int A[n], max = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] > max)
            max = A[i];
    }

    int s = 0;
    for (int i = 0; i < n; i++)
        s += max - A[i];

    printf("%d", s);
    return 0;
}
