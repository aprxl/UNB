#include <stdio.h>

int main() {
  // Crie três variaveis:
  //    - n, que corresponde à quantidade de números
  //    - t, uma variável temporária que utilizaremos no scanf mais para frente no código
  //    - result, a variável que conterá o resultado final do algoritmo
  int n, t, result = 0;

  // Pegamos o valor de 'n', ou seja, a quantidade de números que vamos somar.
  scanf("%d", &n);

  // E logo após fazemos um for loop que repetirá 'n' vezes.
  for (int i = 0; i < n; i++) {
    // Agora utilizamos nossa varíavel 't' para pegar o número que o usuário quer somar.
    scanf("%d", &t);
    
    // E somamos esse número ao nosso resultado.
    // Note que nós estamos repetindo esse processo para cada um dos números que o usuário
    // especificar.
    result += t;
  }

  // Printe o resultado encontrado.
  printf("%d\n", result);
  return 0;
}
