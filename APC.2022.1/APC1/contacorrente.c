#include <stdio.h>

int main() {
  // Declare a array que eu vou utilizar, a int do resultado e do multiplicador.
  int x[6], result = 0, multiplier = 2;

  // E tambem uma char temporaria.
  char t;

  // Faça um loop para pegar todos os 6 digitos do numero.
  for (int i = 0; i < 6; i++) {
    // Pegue o digito.
    scanf("%c", &t);

    // Converta o digito de char para int e salve-o.
    x[i] = (int)t - 48;
  }

  // E agora faça um loop para ler todos os numeros de tras para frente.
  for (int i = 5; i >= 0; i--) {
    // Adicione os valores multiplicados.
    result += x[i] * multiplier;

    // E incremente o multiplicador.
    multiplier++;
  }

  // Agora calcule o digito verificador.
  const int digit = 11 - (result % 11);

  // E printe ele.
  printf("%d\n", digit);

  return 0;
}
