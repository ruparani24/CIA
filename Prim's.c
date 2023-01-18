#include<stdio.h>
int a, b, u, v, n, i, j, ne = 1;
int visit[10] = {0}, min, mincost = 0, cost[10][10];

void main() {
  printf("Prim's Algorithm");
  printf("\nEnter the no. of nodes:");
  scanf("%d", & n);
  printf("\nEnter adjacency matrix:\n");
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      scanf("%d", & cost[i][j]);
      if (cost[i][j] == 0)
        cost[i][j] = 999;
    }
  }
  visit[1] = 1;
  printf("\n");
  while (ne < n) {
    for (i = 1, min = 999; i <= n; i++) {
      for (j = 1; j <= n; j++) {
        if (cost[i][j] < min) {
          if (visit[i] != 0) {
            min = cost[i][j];
            a = u = i;
            b = v = j;
          }
        }
      }
    }
    if (visit[u] == 0 || visit[v] == 0) {
      printf("\nEdge %d:(%d %d), Cost = %d", ne++, a, b, min);
      mincost += min;
      visit[b] = 1;
    }
    cost[a][b] = cost[b][a] = 999;
  }
  printf("\n\nMinimum cost=%d", mincost);
}
