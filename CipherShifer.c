#include <stdio.h>
#include <string.h>

void removeRepeatedChars(char input[], char result[]) {
    int length = strlen(input);
    int resultIndex = 0;
    
    for (int i = 0; i < length; i++) {
        result[resultIndex++] = input[i];
        for (int j = i + 1; j < length; j++) {
            if (input[j] == input[i]) {
                i = j;
                break;
            }
        }
    }
    
    result[resultIndex] = '\0'; // Null-terminate the result string
}

int main() {
    int numTests;
    scanf("%d", &numTests);
    
    while (numTests--) {
        int length;
        scanf("%d", &length);
        
        char input[100];
        scanf("%s", input);
        
        char result[100] = "";
        
        removeRepeatedChars(input, result);
        
        printf("%s\n", result);
    }
    
    return 0;
}
