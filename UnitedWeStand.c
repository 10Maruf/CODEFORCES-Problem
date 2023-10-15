#include <stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    while(t > 0) {

        int n;
        scanf("%d", &n);

        int arr[n];

        int eq = 1;

        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int val = arr[0];
        for(int i = 1; i < n; i++) {
            if(arr[i] != val)
                eq = 0;
        }

        if(eq == 1) {
            printf("-1\n");
            t--;
            continue;
        }

        // Sorting the array
        for(int i = 0; i < n - 1; i++) {
            for(int j = 0; j < n - i - 1; j++) {
                if(arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        int last = arr[n - 1];

        int lt = 1;
        for(int i = n - 2; i >= 0; i--) {
            if(arr[i] == last) {
                lt++;
            } else {
                break;
            }
        }

        int df = n - lt;
        printf("%d %d\n", df, lt);

        for(int i = n - lt - 1; i >= 0; i--) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        for(int i = n - 1; i >= n - lt; i--) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        t--;
    }

    return 0;
}
