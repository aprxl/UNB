#include <stdio.h>

int main() {
  // Vamos declarar as variáveis que vamos utilizar no scanf, com nomes bem fáceis de entender (:innocent:)
  // e também uma variável para salvarmos a idade do filho mais velho.
  int Velha, Filho1, Filho2, Filho3, FilhoVelho;

  // Primeiro pegamos as idades da mãe e do dois primeiros filhos.
  // Note que Filho1 não é necessariamente mais velho, ou novo, do que Filho2,
  // os nomes são apenas arbitrários.
  scanf("%d %d %d", &Velha, &Filho1, &Filho2);

  // Como sabemos que a soma das idades dos três filhos é igual à idade da mãe, nós
  // vamos calcular a idade do terceiro filho.
  Filho3 = Velha - (Filho1 + Filho2);

  // Agora vamos começar as comparações para sabermos qual dos filhos é o mais velho.
  // Inicializaremos a variável 'FilhoVelho' com um valor qualquer, nesse caso a idade
  // do primeiro filho.
  FilhoVelho = Filho1;

  // Depois vamos checar se a idade de Filho1 é menor do que de a de Filho2.
  // Se esse for o caso, Filho2 é mais velho, então vamos mudar o valor de
  // 'FilhoVelho'.
  if (FilhoVelho < Filho2) {
    FilhoVelho = Filho2;
  }

  // E fazemos a mesma coisa com a idade 'Filho3'.
  if (FilhoVelho < Filho3) {
    FilhoVelho = Filho3;
  }

  // Após as comparações, o valor de 'FilhoVelho' será correspondente à idade do filho mais velho,
  // então imprima-o.
  printf("%d\n", FilhoVelho);
  return 0;
}
