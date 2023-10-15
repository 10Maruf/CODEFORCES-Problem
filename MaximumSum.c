#include <stdio.h>
#include <stdlib.h>

#define ull unsigned long long

int cmpfunc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    ull t;
    scanf("%llu", &t);
    while (t--) {
        ull n, k;
        scanf("%llu %llu", &n, &k);
        ull sum = 0;
        ull v[n];
        for (ull i = 0; i < n; i++) {
            scanf("%llu", &v[i]);
            sum += v[i];
        }
        qsort(v, n, sizeof(ull), cmpfunc);

        ull ma = 0;
        ull p[n + 1], s[n + 1];
        p[0] = 0;
        for (ull i = 1; i <= n; i++) {
            p[i] = p[i - 1] + v[i - 1];
        }

        s[0] = 0;
        for (ull i = 1; i <= n; i++) {
            s[i] = s[i - 1] + v[n - i];
        }

        for (ull i = 0; i <= k; i++) {
            ull left = p[2 * i];
            ull right = s[k - i];
            ma = ma > sum - (left + right) ? ma : sum - (left + right);
        }

        printf("%llu\n", ma);
    }
    return 0;
}
