#include <stdio.h>

int main() {
  int n, n2;

  scanf("%d", &n);

  int v[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }

  scanf("%d", &n2);

  for (int i = 0; i < n; i++) {
    if (v[i] == n2) {
      printf("pertence\n");
      return 0;
    }
  }

  printf("nao pertence\n");
  return 0;
}
