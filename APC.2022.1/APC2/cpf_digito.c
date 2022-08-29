#include <stdio.h>

// Nem um pouco feliz com esse codigo :(

int main() {
  // Declare a array que eu vou utilizar, a int do resultado e do multiplicador.
  int x[11], result = 0, multiplier = 2;

  // E tambem uma char temporaria.
  char t;

  // Faça um loop para pegar todos os primeiros 9 digitos do CPF.
  for (int i = 0; i < 9; i++) {
    // Pegue o digito.
    scanf("%c", &t);

    // Converta o digito de char para int e salve-o.
    x[i] = (int)t - 48;
  }

  // E agora faça um loop para ler esses primeiros nove numeros de tras para frente.
  for (int i = 8; i >= 0; i--) {
    // Adicione os valores multiplicados.
    result += x[i] * multiplier;

    // E incremente o multiplicador.
    multiplier++;
  }

  // Calculamos o primeiro digito.
  int first = (result * 10) % 11;

  // Caso o resultado seja igual a 10, considere-o como zero. Depois, salve-o em nossa array.
  if (first >= 10)
    x[9] = 0;
  else
    x[9] = first;

  // Resete as variaveis para calcularmos o valor do proximo digito.
  result = 0;
  multiplier = 2;

  // E agora faça novamente um loop para ler os dez numeros, contendo agora o digito encontrado..
  for (int i = 9; i >= 0; i--) {
    // Adicione os valores multiplicados.
    result += x[i] * multiplier;

    // E incremente o multiplicador.
    multiplier++;
  }

  // Calculamos o segundo digito.
  int second = (result * 10) % 11;

  // Caso o resultado seja igual a 10, considere-o como zero e salve-o em nossa array.
  if (second >= 10)
    x[10] = 0;
  else
    x[10] = second;

  // E printe ele.
  printf("%d%d\n", x[9], x[10]);

  return 0;
}
