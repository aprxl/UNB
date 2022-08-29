#include <stdio.h>

int main() {
  // Declare a variável 'n' que representa o número de linhas que o usuário quer printar.
  int n;

  // Pegue o valor de 'n' dado pelo usuario.
  scanf("%d", &n);
  
  // Faça um for loop que repita 'n' vezes.
  for (int i = 1; i <= n; i++) {
    // Determine se o número atual (i) é par ou não.
    // Fazemos isso calculando o resto da divisão de 'i' por 2. Se o resto
    // For 0, 'i' é par, caso contrário, 'i' é impar.
    const int even = i % 2 == 0;

    if (even) {
      // Se 'i' é par, printe THUMS seis vezes.
      printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
    }

    else {
      // Se 'i' é impar, printe THUMS três vezes.
      printf("THUMS THUMS THUMS\n");
    }
  }

  return 0;
}
