#include <stdio.h>
#include <string.h>

int main() {
    char n[10];
    int k;
    scanf("%s %d", n, &k);

    int len = strlen(n);

    // Perform m operations on the string
    for (int i = 0; i < k; i++) 
    {
        // If the last digit is 0, remove it
        if (n[len - 1] == '0') 
        {
            len--;
            n[len] = '\0';
        }
        // Otherwise, subtract 1 from it
        else {
            n[len - 1]--;
        }
    }

    // Print the result
    if (len == 0) {
        printf("0");
    } else {
        printf("%s", n);
    }
    printf("\n");

    return 0;
}
