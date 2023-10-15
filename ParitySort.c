#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    free(L);
    free(R);
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, i;
        scanf("%d", &n);
        int *arr = (int *)malloc(n * sizeof(int));

        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        int *oddArr = (int *)malloc(n * sizeof(int));
        int *evenArr = (int *)malloc(n * sizeof(int));
        int *newArr = (int *)malloc(n * sizeof(int));

        int oddIdx = 0, evenIdx = 0;
        for (i = 0; i < n; i++) {
            if (arr[i] % 2 != 0)
                oddArr[oddIdx++] = arr[i];
            else
                evenArr[evenIdx++] = arr[i];
        }

        mergeSort(oddArr, 0, oddIdx - 1);
        mergeSort(evenArr, 0, evenIdx - 1);

        oddIdx = 0, evenIdx = 0;
        for (i = 0; i < n; i++) {
            if (arr[i] % 2 != 0)
                newArr[i] = oddArr[oddIdx++];
            else
                newArr[i] = evenArr[evenIdx++];
        }

        bool check = true;
        for (i = 1; i < n; i++) {
            if (newArr[i] < newArr[i - 1]) {
                check = false;
                break;
            }
        }

        if (!check)
            puts("NO");
        else
            puts("YES");

        free(arr);
        free(oddArr);
        free(evenArr);
        free(newArr);
    }

    return 0;
}
