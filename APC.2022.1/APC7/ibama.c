#include <stdio.h>
#include <limits.h>

int main() {
  int n;

  scanf("%d", &n);

  int m[n][n];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      scanf("%d", &m[i][j]);

  int res = 0;
  int idx = 0;

  for (int i = 0; i < n; i++) {
    int res_atual = 0;

    for (int j = 0; j < n; j++) {
      res_atual += m[j][i];
    }

    if (res_atual > res) {
      res = res_atual;
      idx = i + 1;
    }     
  }
  
  printf("%d\n", idx);

  return 0;
}
