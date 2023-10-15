#include <stdio.h>
#include <stdbool.h>

int main()
{
    int t;
    // Read the number of test cases
    scanf("%d", &t);

    while (t--)
    {
        long long int a, z, n, x;
        int sotto = 0;
        // Read the number of elements in the current test case
        scanf("%lld", &n);
        char string[n+1];
        sotto = 0;
        string[0] = '\0';

        for (int j = 0; j < n; ++j)
        {
            // Read the current element
            scanf("%lld", &x);

            // Check conditions to determine the value of the string
            if (j == 0)
            {
                // For the first element, set it as both 'a' and 'z' and set string as '1'
                z = x;
                a = x;
                string[j] = '1';      // Set the j-th character of the string as '1'
                string[j + 1] = '\0'; // Terminate the string
            }
            else if (!sotto && x <= a && z > x)
            {
                // If the element breaks the pattern, set sotto flag, update 'z', and set string as '1'
                sotto = 1; // Set the sotto flag to true
                z = x;
                string[j] = '1';      // Set the j-th character of the string as '1'
                string[j + 1] = '\0'; // Terminate the string
            }
            else if (!sotto && x >= a && z <= x)
            {
                // If the element is within the range of 'a' and 'z', set string as '1'
                z = x;
                string[j] = '1';      // Set the j-th character of the string as '1'
                string[j + 1] = '\0'; // Terminate the string
            }
            else if (sotto && x >= z && x <= a)
            {
                // If the element is within the range of 'z' and 'a' (after sotto flag is set), set string as '1'
                z = x;
                string[j] = '1';      // Set the j-th character of the string as '1'
                string[j + 1] = '\0'; // Terminate the string
            }
            else
            {
                // If none of the conditions match, set string as '0'
                string[j] = '0';      // Set the j-th character of the string as '0'
                string[j + 1] = '\0'; // Terminate the string
            }
        }

        // Print the string for the current test case
        printf("%s\n", string);
    }

    return 0;
}
