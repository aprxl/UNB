#include <stdio.h>

int main() {
  int n;

  scanf("%d", &n);

  int v[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }

  // Printe todos os numeros pares.
  for (int i = 0; i < n; i++) {
    int numero_atual = v[i];

    if (numero_atual % 2 == 0) {
      printf("%d ", numero_atual);
    }
  }

  // Pula uma linha.
  printf("\n");

  // Printe todos os numeros impares.
  for (int i = 0; i < n; i++) {
    int numero_atual = v[i];

    if (numero_atual % 2 != 0) {
      printf("%d ", numero_atual);
    }
  }

  return 0;
}
