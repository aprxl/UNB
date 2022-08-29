#include <stdio.h>

int main() {
  int n;

  scanf("%d", &n);

  int v1[n], v2[n];

  for (int i = 0; i < n; i++)
    scanf("%d", &v1[i]);

  for (int i = 0; i < n; i++)
    scanf("%d", &v2[i]);

  for (int i = 0; i < n; i++)
    printf("%d ", v1[i] + v2[i]);

  printf("\n");
  return 0;
}
