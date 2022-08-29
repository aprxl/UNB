#include <stdio.h>

// Crie uma função que recebe dois inteiros diferentes e
// retorne o maior entre eles.
int max(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

int main() {
  // Cria a array de inteiros que eu vou utilizar.
  int x[4];
  
  // Pegue o valor de cada um dos inteiros.
  for (int i = 0; i < 4; i++)
    scanf("%d", &x[i]);

  // Calcule e printe o maior inteiro entre eles.
  printf("%d\n", max(x[0], max(x[1], max(x[2], x[3]))));
  return 0;
}
