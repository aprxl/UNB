#include <stdio.h>

int main() {
  // Declaramos as variaveis de largura e altura.
  int l, h;

  // Pegamos o valor da altura e largura dados pelo usuário, respectivamente. 
  scanf("%d %d", &h, &l);

  // Fazemos um loop que repete 'h' vezes. Isso é porque a altura do tabuleiro
  // é dada por 'h', portanto precisamos printar 'h' linhas.  
  for (int i = 0; i < h; i++) {

    // E dentro do loop, fazemos outro loop que repete 'l' vezes. Isso é porque 
    // o número de colunas, ou seja, o número de casas por linha é dado por 'l'
    // e nós queremos printar 'l' casas para cada linha.
    for (int j = 0; j < l; j++) {
      // Printe a casa correspondente.
      // Caso i = 2 e j = 3, teremos:
      //
      //          [002, 003]
      //
      printf("[%03d,%03d]", i, j);
    }

    // Assim que terminarmos de printar todas as casas dessa linha, pule para a próxima linha.
    printf("\n");
  }

  return 0;
}
