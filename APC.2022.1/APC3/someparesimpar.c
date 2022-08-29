#include <stdio.h>

int main() {
  // Para esse exercicio, declaramos apenas uma variável temporária e uma para guadarmos o resultado das somas.
  int t, result_odd = 0, result_even = 0;

  // Pegue o valor inicial de 't' dado pelo usuário.
  scanf("%d", &t);
  
  // Agora utilizaremos um while loop para realizar nosso algoritmo.
  // O propósito do while é fazer um loop um número indefinido de vezes. Caso
  // o usuário especificasse quantas vezes ele quisesse repetir o processo, como
  // nos outros exercicios, nós utilizariamos o for.
  //
  // Essencialmente você quer executar o código dentro do while enquanto o valor de 't'
  // for diferente de 0.
  while (t != 0) {
    // Determine se o número atual (t) é par ou não.
    // Fazemos isso calculando o resto da divisão de 't' por 2. Se o resto
    // For 0, 't' é par, caso contrário, 'i' é impar.
    const int even = t % 2 == 0;

    // Nós checamos se 't' é par antes de somar, pois queremos somar apenas pares aos resultado dos pares.
    if (even) {
      result_even += t;
    }

    // Caso contrário, 't' é impar, então some-o ao resultado dos impares.
    else {
      result_odd += t;
    }

    // E no final do loop, nós pegamos o próximo valor de 't'.
    scanf("%d", &t);
  }

  // Assim que sairmos do loop, nós teremos o resultados da somas
  // Então, printe-os.
  printf("%d %d\n", result_even, result_odd);

  return 0;
  return 0;
}
