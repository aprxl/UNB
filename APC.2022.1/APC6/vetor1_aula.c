#include <stdio.h>
#include <limits.h>

int main() {
  int n;

  scanf("%d", &n);

  int v[n];

  for (int i = 0; i < n; i++)
    scanf("%d", &v[i]);

  int menor_numero = INT_MAX;

  for (int i = 0; i < n; i++) {
    int num_atual = v[i];

    if (num_atual < menor_numero) {
      menor_numero = num_atual;
    }
  }

  int segundo_menor = INT_MAX;

  for (int i = 0; i < n; i++) {
    int num_atual = v[i];

    if (num_atual < segundo_menor && num_atual > menor_numero) {
      segundo_menor = num_atual;
    }
  }

  int terceiro_menor = INT_MAX;

  for (int i = 0; i < n; i++) {
    int num_atual = v[i];

    if (num_atual < terceiro_menor && num_atual > segundo_menor) {
      terceiro_menor = num_atual;
    }
  }

  printf("%d\n%d\n", segundo_menor, terceiro_menor);
  return 0;
}
