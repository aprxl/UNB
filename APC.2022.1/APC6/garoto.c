#include <stdio.h>
#include <limits.h>

int main() {
  int n;

  scanf("%d", &n);

  int vec[n];

  for (int i = 0; i < n; i++)
    scanf("%d", &vec[i]);

  int primeiro_menor = INT_MAX, segundo_menor = INT_MAX, terceiro_menor = INT_MAX;

  for (int i = 0; i < n; i++) {
    const int atual = vec[i];

    if (atual < primeiro_menor) {
      primeiro_menor = atual;
    }
  }

  for (int i = 0; i < n; i++) {
    const int atual = vec[i];

    if (atual > primeiro_menor && atual <= segundo_menor) {
      segundo_menor = atual;
    }
  }

  for (int i = 0; i < n; i++) {
    const int atual = vec[i];

    if (atual > segundo_menor && atual <= terceiro_menor) {
      terceiro_menor = atual;
    }
  }

  printf("%d\n%d\n", segundo_menor, terceiro_menor);

  return 0;
}
