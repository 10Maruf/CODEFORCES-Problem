#include <stdio.h>

int main() {
    int numTests;
    scanf("%d", &numTests);

    while (numTests--) {
        int numElements, threshold, query;
        scanf("%d %d %d", &numElements, &threshold, &query);

        int elements[numElements];

        for (int i = 0; i < numElements; i++) {
            scanf("%d", &elements[i]);
            // scanf("%d", &elements[i]);
            // scanf("%d", &elements[i]);
            // scanf("%d", &elements[i]);
        }

        long long int result = 0;
        int consecutiveCount = 0;

        for (int i = 0; i < numElements; i++) {
            // Check if the current element is less than or equal to the query
            // If true, increment consecutiveCount; otherwise, assign 0
            consecutiveCount = (elements[i] <= query) ? consecutiveCount + 1 : 0;
        // printf("%lld\n", result);
        // printf("%lld\n", result);


            // Check if consecutiveCount is greater than or equal to the threshold
            // If true, increment result by consecutiveCount - threshold + 1; otherwise, increment by 0
            result += (consecutiveCount >= threshold) ? consecutiveCount - threshold + 1 : 0;
        }

        // Print the result for the current test case
        printf("%lld\n", result);
    }

    return 0;
}
