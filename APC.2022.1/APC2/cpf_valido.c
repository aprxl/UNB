#include <stdio.h>

// Nem um pouco feliz com esse codigo :(

int main() {
  // Declare a array que eu vou utilizar, a int do resultado e do multiplicador.
  int x[11], result = 0, multiplier = 2;

  // E mais variaveis para checar se os números do CPF se repetem.
  // Fazemos isso porque CPFs como '111.111.111-11' ou '333.333.333-33' são inválidos,
  // Mas irão satisfazer o algoritmo de validação.
  // int repeat = 1;

  // E tambem uma char temporaria.
  char t;

  // Faça um loop para pegar todos os digitos do CPF.
  for (int i = 0; i < 11; i++) {
    // Pegue o digito.
    scanf("%c", &t);

    // Converta o digito de char para int.
    const int digit = (int) t - 48;

    // Salve-o na array.
    x[i] = digit;

    // Agora checamos se esse é um dos primeiros nove digitos do CPF e se ainda estamos repetindo números.
    // Ai checamos se o mesmo número continua se repetindo e salvamos o resultado.
    //  if (i > 0 && i < 9 && repeat) {
    //    repeat = repeat && ( x[0] == digit );
    //  }
  }

  // Se os números do CPF se repetiram, isso significa que o CPF é invalido.
  //   if (repeat) {
  //    printf("invalido\n");
  //    return 0;
  //   }

  // E agora faça um loop para ler esses primeiros nove numeros de tras para frente.
  for (int i = 8; i >= 0; i--) {
    // Adicione os valores multiplicados.
    result += x[i] * multiplier;

    // E incremente o multiplicador.
    multiplier++;
  }

  // Calculamos o primeiro digito.
  int first = (result * 10) % 11;

  // Caso o resultado seja igual a 10, considere-o como zero.
  if (first >= 10)
   first = 0;
 
  // Caso o primeiro digito calculado seja diferente do primeiro digito dado pelo usuário,
  // o CPF é invalido.
  if (first != x[9]) {
   printf("invalido\n");
   return 0;
  }

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

  // Caso o resultado seja igual a 10, considere-o como zero.
  if (second >= 10)
    second = 0;

  // Caso o segundo digito calculado seja diferente do segundo digito dado pelo usuário,
  // o CPF é invalido.
  if (second != x[10]) {
   printf("invalido\n");
   return 0;
  }

  // Se chegamos aqui, isso significa que nenhum dos nossos testes de validação deram negativos.
  // Ou seja, o nosso CPF é valido.
  printf("valido\n");

  return 0;
}
