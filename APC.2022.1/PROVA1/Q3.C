#include <stdio.h>

int main() {
  int n, x, y;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d %d", &x, &y);

    int v = x ^ y;

    if (v == 0) {
      printf("Falso\n");
    }

    else {
      printf("Verdadeiro\n");
    }
  }
  return 0;
}
