#include <stdio.h>
#include <limits.h>

int main() {
  // Crie três variaveis:
  //    - n, que corresponde à quantidade de números
  //    - t, uma variável temporária que utilizaremos no scanf mais para frente no código
  //    - result, a variável que conterá o resultado final do algoritmo
  //
  //    O que é INT_MIN?
  //      INT_MIN é o valor mínimo que um 'int' pode assumir e é declarado dentro do arquivo 'limits.h'.
  //      Como queremos saber o maior número dentre os números que o usuário especificará, pode-se assumir
  //      que nenhum número será menor do que INT_MIN. Portanto, com uma simples comparação, podemos continuamente
  //      comparar os números e salvar o maior número entre eles.
  //
  int n, t, result = INT_MIN;

  // Pegamos o valor de 'n', ou seja, a quantidade de números que vamos comparar.
  scanf("%d", &n);
  
  // E logo após fazemos um for loop que repetirá 'n' vezes.
  for (int i = 0; i < n; i++) {
    // Agora utilizamos nossa varíavel 't' para pegar o número que o usuário quer comparar.
    scanf("%d", &t);
  
    // E depois comparamos o valor de 'result' com 't'. Se 't' for maior, salvamos o valor de 't'.
    // Note que esse processo é repetido para cada um dos números que o usuário especificar. Portanto,
    // ao final do loop, nós teremos comparado todos os números um com os outros, tendo então o resultado
    // do algoritmo.
    if (result < t) {
      result = t;
    }
  }

  // Printe o resultado para o usuário.
  printf("%d\n", result);

  return 0;
}
