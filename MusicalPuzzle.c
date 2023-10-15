#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pair {
    char first;
    char second;
} Pair;

int main()
{
    unsigned long long t;
    const int MOD = 1000000007;

    scanf("%llu", &t);
    while (t--)
    {
        Pair pairs[1000];  // Assuming a maximum of 1000 pairs
        int pairCount = 0;
        long long n;
        char str[100];
        scanf("%lld", &n);
        scanf("%s", str);

        int i;
        for (i = 0; i < n - 1; i++)
        {
            Pair newPair;
            newPair.first = str[i];
            newPair.second = str[i + 1];

            int exists = 0;
            int j;
            for (j = 0; j < pairCount; j++)
            {
                if (pairs[j].first == newPair.first && pairs[j].second == newPair.second)
                {
                    exists = 1;
                    break;
                }
            }

            if (!exists)
            {
                pairs[pairCount] = newPair;
                pairCount++;
            }
        }

        printf("%d\n", pairCount);
    }
    return 0;
}