#include <stdio.h>

int main() {
  // Primeiro, vamos declarar o valor de cada uma das jogadas possíveis para facilitar a nossa leitura.
  // Por exemplo, no exercício, o valor de 'Pedra' é 0, o valor de 'Papel' é 1
  // etc.
  const int PEDRA   = 0;
  const int PAPEL   = 1;
  const int TESOURA = 2;
  const int LAGARTO = 3;
  const int SPOCK   = 4;

  // Agora vamos declarar as varíaveis para armazenar as jogadas dos jogadores 'A' e 'B'.
  int a, b;

  // E logo após, pegamos o valor das jogadas.
  scanf("%d %d", &a, &b);

  // Agora que temos as jogadas, podemos fazer o nosso algoritmo pra determinar quem ganhou.
  // Primeiro checamos se ambos jogadores jogadaram a mesma coisa.
  if (a == b) {
    // Se esse for o caso, temos um empate
    printf("empate\n");
  }

  // Depois vamos chechar se o jogador `A` ganhou. Para isso, fazemos varias comparações entre 'a' e 'b'
  // para determinar se ele ganhou ou não baseado nas informações que o exercicio nos deu. Por exemplo,
  // caso o jogador 'A' tenha escolhido 'PEDRA' e o jogador 'B' tenha escolhido 'TESOURA' ou 'LAGARTO',
  // isso significa que 'A' ganhou de 'B'. Logo, faremos a mesma coisa para todas as possibilidades
  // onde o jogador 'A' ganha.
  else if (
    ( a == PEDRA   && (b == TESOURA || b == LAGARTO) ) ||
    ( a == PAPEL   && (b == PEDRA   || b == SPOCK) )   ||
    ( a == TESOURA && (b == PAPEL   || b == LAGARTO) ) ||
    ( a == LAGARTO && (b == PAPEL   || b == SPOCK) )   ||
    ( a == SPOCK   && (b == PEDRA   || b == TESOURA) )
  ) {
    // Se o jogador 'A' ganhou, printe seu nome pro usuário.
    printf("A\n");
  }

  // Agora estamos na última condição do algoritmo. Caso nenhuma das comparações anteriores tenham dado
  // verdadeiras, ou seja, se o jogo não deu empate e o jogador 'A' não ganhou de 'B', então podemos afirmar
  // que o jogador 'B' ganhou.
  else {
    // Se o jogador 'B' ganhou, printe seu nome pro usuário.
    printf("B\n");
  }

  return 0;
}
