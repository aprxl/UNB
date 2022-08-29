#include <stdio.h>

int main() {
   // Crie uma tabela contendo os números que perderão para cada número.
   // Por exemplo
   //    0 ganha de 2 e 3
   //    1 ganha de 0 e 4
   //    2 ganha de 1 e 3
   //          ...
   const int losers[5][2] = {
      { 2, 3 },
      { 0, 4 },
      { 1, 3 },
      { 1, 4 },
      { 0, 2 }
   };

   // Declare as variaveis que vamos utilizar.
   int a, b;

   // Pegue o valor dessas variaveis.
   scanf("%d\n%d", &a, &b);

   // Caso a jogada de 'A' e 'B' sejam iguais, o jogo dará um empate.
   if (a == b) {
      printf("empate\n");
      return 0;
   }

   // Agora vamos checar se o jogador 'A' ganhou.
   // Para isso vamos criar uma variável para guardar o resultado da partida em favor de 'A'.
   // E pegar a lista de perdedores respectiva à jogada do jogador 'A'.
   const int* loser = losers[a];
   int result;

   // Faça um loop para a lista de perdedores.
   for (int i = 0; i < 2; i++) {
      // Caso a jogada de 'B' seja igual a um das jogadas que perderiam contra 'A'
      // Podemos assumir que 'B' perdeu e, consequentemente, 'A' ganhou.
      if (loser[i] == b) {
         printf("A\n");
         return 0;
      }
   }

   // Caso a jogada de 'B' não esteja entre as jogadas que perderiam contra 'A'
   // Podemos assumir que 'B' ganhou.
   printf("B\n");

   return 0;
}