#include <stdio.h>

int main() {
  int n;

  scanf("%d", &n);

  int m[n][n];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      scanf("%d", &m[i][j]);

  int highest_sum = 0;
  int res = 0;

  for (int i = 0; i < n; i++) {
    int sum = 0;

    for (int j = 0; j < n; j++) 
      sum += m[j][i];
    
    if (sum > highest_sum) {
      highest_sum = sum;
      res = i + 1;
    }
  }

  printf("%d\n", res);
  return 0;
}
