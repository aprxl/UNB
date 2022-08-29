#include <stdio.h>
#include <limits.h>

int main() {
  int n;

  scanf("%d", &n);

  int vetor[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &vetor[i]);
  }

  int menor_numero = INT_MAX;
  int menor_posicao = -1;

  for (int i = 0; i < n; i++) {
    int numero_atual = vetor[i];

    if (numero_atual < menor_numero) {
      menor_numero = numero_atual;
      menor_posicao = i;
    }
  }

  printf("%d\n", menor_posicao);

  return 0;
}
