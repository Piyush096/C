#include <stdio.h>
#include <limits.h>

#define N 5

int main(void)
{
    int cost[N+1][N+1] = { {0      , 0      , 0      , 0      , 0      , 0      },
                           {0      , 0      , 3      , 8      , INT_MAX, -4     },
                           {0      , INT_MAX, 0      , INT_MAX, 1      , 7      },
                           {0      , INT_MAX, 4      , 0      , INT_MAX, INT_MAX},
                           {0      , 2      , INT_MAX, -5     , 0      , INT_MAX},
                           {0      , INT_MAX, INT_MAX, INT_MAX, 6      , 0      } };

    int dist[N+1];
    int v = 1;

    for (int i = 1; i <= N; i++)
        dist[i] = cost[v][i];

    printf("dist 1: ");
    for (int i = 1; i <= N; i++)
        printf("%d ", dist[i]);
    putchar('\n');

    for (int k = 2; k <= (N - 1); k++)
    {
        for (int u = 2; u <= N; u++)
        {
            for (int i = 1; i <= N; i++)
            {
                if ((long long) dist[u] > ((long long) dist[i] + (long long) cost[i][u]))
                    dist[u] = (dist[i] + cost[i][u]);
            }
        }

        printf("dist %d: ", k);
        for (int i = 1; i <= N; i++)
            printf("%d ", dist[i]);
        putchar('\n');
    }

    return 0;
}
