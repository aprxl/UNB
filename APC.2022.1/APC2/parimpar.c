#include <stdio.h>

int main() {
  // Crie uma matrix constante com o nome de cada um dos jogadores.
  const char players[2][2] = {{'A', 'B'}, {'C', 'D'}};

  // Cria uma matrix que corresponde aos tres jogos.
  int games[3][3];

  // E uma array onde eu vou guardar os resultados dos dois primeiros jogos.
  char results[2];

  // Pegue o valor de cada um dos jogos e suas respectivas jogadas.
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      scanf("%d", &games[i][j]);

  // Faça um loop para processar os jogos.
  for (int i = 0; i < 3; i++) {
    // Pegue os dados do jogo atual.
    const int* game = games[i];

    // Determine se o jogo é par ou impar.
    const int odd = game[0] % 2 == 0;

    // Pegue o valor da soma dos numeros dados por cada jogador.
    const int sum = game[1] + game[2];

    // Se o jogo é par e o resultado também, entao o primeiro jogador ganhou.
    // O mesmo acontecerá se o jogo é impar e resultado também.
    if ((odd && sum % 2 == 0) || (!odd && sum % 2 == 1)) {
      // Cheque se esse é o ultimo jogo. Caso seja, printe o resultado do 'torneio'.
      if (i == 2)
        printf("%c\n", results[0]);

      // Caso contrário, salve os resultados.
      else
        results[i] = players[i][0];
    }

    // Caso contrário, o primeiro jogador, que escolheu se o jogo é par ou impar, perdeu.
    // Ou seja, o segundo jogador é o vencedor.
    else {
      // Cheque se esse é o ultimo jogo. Caso seja, printe o resultado do 'torneio'.
      if (i == 2)
        printf("%c\n", results[1]);

      // Caso contrário, salve os resultados.
      else
        results[i] = players[i][1];
    }
  }

  return 0;
}
