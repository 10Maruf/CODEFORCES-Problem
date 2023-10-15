#include <stdio.h>
#include <math.h>

int main() {
    int numTests;
    scanf("%d", &numTests);

    int testCases[numTests][2];

    for (int i = 0; i < numTests; i++) {
        scanf("%d %d", &testCases[i][0], &testCases[i][1]);
    }

    for (int i = 0; i < numTests; i++) {
        int number = testCases[i][0];
        int power = testCases[i][1];

        if (log2(number) < power) {
            printf("%d\n", number + 1);
        } else {
            printf("%d\n", (int)pow(2, power));
        }
    }

    return 0;
}
