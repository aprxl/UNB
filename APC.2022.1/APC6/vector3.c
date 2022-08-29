#include <stdio.h>

int main() {
  int n, t;

  scanf("%d", &n);

  int x[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &x[i]);
  }

  for (int i = 0, has_printed = 0; i < n; i++) {
    if (x[i] % 2 == 0) {
      if (has_printed++ > 0)
        printf(" ");

      printf("%d", i);
    }
  }

  printf("\n");

  for (int i = 0, has_printed = 0; i < n; i++) {
    if (x[i] % 2 != 0) {
      if (has_printed++ > 0)
        printf(" ");

      printf("%d", i);
    }
  }

  printf("\n");
}
