/*maruf_bro*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <limits.h>

#define ll long long int

void merge(ll arr[][2], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    ll left_arr[n1][2], right_arr[n2][2];

    for (int i = 0; i < n1; i++)
    {
        left_arr[i][0] = arr[left + i][0];
        left_arr[i][1] = arr[left + i][1];
    }

    for (int i = 0; i < n2; i++)
    {
        right_arr[i][0] = arr[mid + 1 + i][0];
        right_arr[i][1] = arr[mid + 1 + i][1];
    }

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        if (left_arr[i][0] <= right_arr[j][0])
        {
            arr[k][0] = left_arr[i][0];
            arr[k][1] = left_arr[i][1];
            i++;
        }
        else
        {
            arr[k][0] = right_arr[j][0];
            arr[k][1] = right_arr[j][1];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k][0] = left_arr[i][0];
        arr[k][1] = left_arr[i][1];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k][0] = right_arr[j][0];
        arr[k][1] = right_arr[j][1];
        j++;
        k++;
    }
}

void mergeSort(ll arr[][2], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main()
{
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--)
    {
        int n;
        scanf("%d", &n);
        ll arr[n][2];
        for (int i = 0; i < n; i++)
        {
            ll x;
            scanf("%lld", &x);
            arr[i][0] = x;
            arr[i][1] = i;
        }

        mergeSort(arr, 0, n - 1);

        ll p = n;
        ll result[n];
        for (int i = 0; i < n; i++)
        {
            arr[i][0] = p;
            p--;
            result[arr[i][1]] = arr[i][0];
        }

        for (int i = 0; i < n; i++)
        {
            printf("%lld ", result[i]);
        }
        printf("\n");
    }

    return 0;
}