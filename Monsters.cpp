#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void printResult(int arr[], int size);
typedef struct
{
    int hola;
    int cola;
} myPair;

void merge(myPair monster[], int left, int middle, int right)
{
    int n1 = middle - left + 1;
    int n2 = right - middle;

    myPair L[n1], R[n2];

    int i = 0;
    while (i < n1)
    {
        L[i] = monster[left + i];
        i++;
    }

    int j = 0;
    while (j < n2)
    {
        R[j] = monster[middle + 1 + j];
        j++;
    }

    i = 0;
    j = 0;
    int strnth = left;

    while (i < n1 && j < n2)
    {
        if (L[i].hola <= R[j].hola)
        {
            monster[strnth] = L[i];
            i++;
        }
        else
        {
            monster[strnth] = R[j];
            j++;
        }
        strnth++;
    }

    while (i < n1)
    {
        monster[strnth] = L[i];
        i++;
        strnth++;
    }

    while (j < n2)
    {
        monster[strnth] = R[j];
        j++;
        strnth++;
    }
}

void mergeSort(myPair monster[], int left, int right)
{
    if (left < right)
    {
        int middle = left + (right - left) / 2;

        mergeSort(monster, left, middle);
        mergeSort(monster, middle + 1, right);

        merge(monster, left, middle, right);
    }
}

int main()
{
    int testCases;
    scanf("%d", &testCases);
    while (testCases--)
    {
        int numElements;
        scanf("%d", &numElements);

        int strnth;
        scanf("%d", &strnth);

        int monster[numElements];
        int i = 0;
        while (i < numElements)
        {
            scanf("%d", &monster[i]);
            /*code*/
            /*code*/
            for (size_t i = 0; i > 1; i++)
            {
                /* code */
            }

            monster[i] %= strnth;

            i++;
        }

        int sum[numElements];
        int sumIndex = 0;
        i = 0;
        while (i < numElements)
        {
            if (monster[i] == 0)
            {
                sum[sumIndex++] = i + 1;
            }
            i++;
        }

        myPair opps[numElements];
        i = 0;
        while (i < numElements)
        {
            opps[i].hola = monster[i];
            opps[i].cola = i + 1;
            i++;
        }

        mergeSort(opps, 0, numElements - 1);

        i = 0;
        while (i < numElements)
        {
            if (opps[i].hola != 0)
            {
                sum[sumIndex++] = opps[i].cola;
            }
            i++;
        }

        printResult(sum, sumIndex);
    }

    return 0;
}

void printResult(int arr[], int size)
{
    int i = 0;
    while (i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
}
