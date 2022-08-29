#include <stdio.h>

int main() {
  int n;

  scanf("%d", &n);

  int v1[n], v2[n];

  for (int i = 0; i < n; i++)
    scanf("%d", &v1[i]);

  for (int i = 0; i < n; i++)
    scanf("%d", &v2[i]);

  for (int i = 0; i < n; i++) {
    int valor_v1 = v1[i];
    int valor_v2 = v2[i];

    if (valor_v1 != valor_v2) {
      printf("nao\n");
      return 0;
    }
  }

  printf("sim\n");
  return 0;
}
