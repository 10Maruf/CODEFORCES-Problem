#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_test_cases;
    scanf("%d", &num_test_cases);

    while (num_test_cases--)
    {
        long long array_length, target_count;
        scanf("%lld %lld", &array_length, &target_count);

        long long *elements = (long long *)malloc(array_length * sizeof(long long));
        if (elements == NULL)
        {
            puts("Memory allocation failed!");
            return 1;
        }

        for (long long i = 0; i < array_length; i++)
        {
            scanf("%lld", &elements[i]);
        }

        long long last_index = array_length - 1;
        long long count = 0;
        for (long long i = 0; i < array_length; i++)
        {
            if (elements[i] == elements[0])
            {
                count++;
            }
            if (count == target_count)
            {
                last_index = i;
                break;
            }
        }

        if (count < target_count)
        {
            puts("NO");
        }
        else if (elements[0] == elements[array_length - 1])
        {
            puts("YES");
        }
        else
        {
            count = 0;
            for (long long i = array_length - 1; i > last_index; i--)
            {
                if (elements[i] == elements[array_length - 1])
                {
                    count++;
                }
            }

            if (count >= target_count)
            {
                puts("YES");
            }
            else
            {
                puts("NO");
            }
        }

        free(elements);
    }

    return 0;
}
