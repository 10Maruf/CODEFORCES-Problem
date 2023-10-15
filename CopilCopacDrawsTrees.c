#include <stdio.h>
#include <stdlib.h>

struct Pair {
    int first;
    int second;
};

struct Map {
    struct Pair key;
    int value;
};

int solve(int **adj, struct Map *mp, int p, int i);

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        
        int **adj = (int **)malloc((n + 1) * sizeof(int *));
        for (int i = 0; i <= n; i++) {
            adj[i] = NULL;
        }

        struct Map *mp = (struct Map *)malloc(n * sizeof(struct Map));

        for (int i = 0; i < n - 1; i++) {
            int x, y;
            scanf("%d %d", &x, &y);

            mp[i].key.first = x;
            mp[i].key.second = y;
            mp[i].value = i;

            if (adj[x] == NULL) {
                adj[x] = (int *)malloc(sizeof(int));
                adj[x][0] = y;
            } else {
                int count = 0;
                while (adj[x][count] != 0) {
                    count++;
                }
                adj[x] = (int *)realloc(adj[x], (count + 2) * sizeof(int));
                adj[x][count] = y;
                adj[x][count + 1] = 0;
            }

            if (adj[y] == NULL) {
                adj[y] = (int *)malloc(sizeof(int));
                adj[y][0] = x;
            } else {
                int count = 0;
                while (adj[y][count] != 0) {
                    count++;
                }
                adj[y] = (int *)realloc(adj[y], (count + 2) * sizeof(int));
                adj[y][count] = x;
                adj[y][count + 1] = 0;
            }
        }

        int ans = -__INT_MAX__;
        for (int i = 0; i < sizeof(adj[1]) / sizeof(int); i++) {
            ans = (ans > solve(adj, mp, 1, adj[1][i])) ? ans : solve(adj, mp, 1, adj[1][i]);
        }

        printf("%d\n", ans + 1);

        free(mp);
        for (int i = 0; i <= n; i++) {
            free(adj[i]);
        }
        free(adj);
    }

    return 0;
}

int solve(int **adj, struct Map *mp, int p, int i) {
    int ans = 0;
    int j = 0;
    while (adj[i][j] != 0) {
        if (adj[i][j] == p) {
            j++;
            continue;
        }
        int x = 0;
        if (mp[mp[(struct Pair){p, i}]].value > mp[mp[(struct Pair){i, adj[i][j]}]].value)
            x++;
        ans = (ans > x + solve(adj, mp, i, adj[i][j])) ? ans : x + solve(adj, mp, i, adj[i][j]);
        j++;
    }
    return ans;
}
