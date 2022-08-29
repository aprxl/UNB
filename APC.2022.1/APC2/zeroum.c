#include <stdio.h>

int main() {
  // Crie uma lista dos nomes dos jogadores na mesma ordem que vão aparecer no scanf.
  const char labels[3] = {'A', 'B', 'C'};

  // Declare uma array de inteiros que eu vou utilizar.
  int x[3];
  int zeros = 0, ones = 0;

  // Pegue os valores de cada inteiro.
  scanf("%d %d %d", &x[0], &x[1], &x[2]);
  
  // Faca um loop para todos os numeros do input.
  for (int i = 0; i < 3; i++) {
    // Pegue o numero atual do loop.
    const int current = x[i];

    // Se o numero for um zero, incremente o contador dos zeros, caso contrario, incremente
    // o contador dos ums.
    current == 1 ? ones++ : zeros++;
  }

  // Faca um proximo loop para todos os numeros do input.
  for (int i = 0; i < 3; i++) {
    // Pegue o numero atual do loop.
    const int current = x[i];

    // Se a minoria dos jogos forem ums e esse jogador jogou um, ele ganhou o jogo.
    if (zeros > ones && current) {
      printf("%c\n", labels[i]);
    } 

    // Do contrario, se o jogador jogou zero, ele ganhou.
    else if (ones > zeros && !current) {
      printf("%c\n", labels[i]);
    }
  }

  // Se ninguem ganhou, o jogo deu empate.
  if (ones == 0 || zeros == 0) {
    printf("empate\n");
  }

  return 0;
}
