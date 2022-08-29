#include <stdio.h>

int main() {
  // Como sempre, vamos começar inicializando nossa variáveis. A variável 'n' será responsável por guardar
  // o número de jogos de cada linha e 't' guardará o valor de cada um dos jogos de cada linha.
  int n, t;

  // Primeiro pegamos o número de jogos da primeira linha.
  scanf("%d", &n);

  // Note que o exercício não nos dá a quantidade de linhas que a entrada terá, mas ele nos dá a informação
  // de que quando o número de jogos de uma linha for igual a '0', a entrada acabará. Então vamos usar um
  // loop while que repetirá enquanto 'n' for diferente de '0'.
  while (n != 0) {
    // Agora vamos começar a pegar os resultados de cada um dos jogos dessa linha.
    // Para guardar os resultados, vamos criar mais duas variáveis para cada um dos jogadores.
    int alice = 0, joao = 0;

    // E agora vamos fazer um loop que repete 'n' vezes, ou seja, para cada um dos jogos dessa linha.
    for (int i = 0; i < n; i++) {
      // E dentro do for, vamos pegar resultado do jogo atual. 
      scanf("%d", &t);

      // O exercício nos diz que quando o resultado for '0', alice terá ganhado, e quando for '1', joão terá ganho.
      // Então vamos primeiro checar se o resultado é igual a '0'.
      if (t == 0) {
        // Nesse caso, incremente a quantidade de vitórias de alice.
        alice++;
      }

      else {
        // Caso contrário, incremente a quantidade de vitórias de joão.
        joao++;
      }
    }

    // Ao final de cada linha, vamos imprimir a quantidade de vitórias de cada um dos jogadores.
    printf("Alice ganhou %d e Joao ganhou %d\n", alice, joao);

    // E logo após vamos pegar o valor de 'n' da próxima linha para continuarmos nosso código.
    // Note que depois de exercutarmos o 'scanf', nós voltaremos para a linha 14, ou seja, pro
    // inicio do while, onde iremos checar se 'n' ainda é diferente de 0.
    scanf("%d", &n);
  }

  return 0;
}
